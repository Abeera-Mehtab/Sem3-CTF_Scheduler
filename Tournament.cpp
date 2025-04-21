#include "Tournament.h"

Tournament::Tournament() {
    root = nullptr;
    loadTeams();  // Load teams into the BST
    populateRound1Queues();  // Populate queues for round 1
}

void Tournament::loadTeams() {
    Teams teamsClass;
    std::string filePath = "Teams.txt";  // Path to the teams file

    if (teamsClass.LoadTeamsFromFile(filePath)) {
        for (int i = 0; i < Teams::TOTAL_TEAMS; ++i) {
            insertTeam(teamsClass.GetName(i), std::stoi(teamsClass.GetRank(i)));
        }
    }
    else {
        std::cerr << "Error loading teams from file." << std::endl;
    }
}

void Tournament::insertTeam(const std::string& name, int rank) {
    if (root == nullptr) {
        root = new TournamentTeam(name, rank);
    }
    else {
        TournamentTeam* current = root;
        while (true) {
            if (rank < current->rank) {
                if (current->left == nullptr) {
                    current->left = new TournamentTeam(name, rank);
                    break;
                }
                current = current->left;
            }
            else {
                if (current->right == nullptr) {
                    current->right = new TournamentTeam(name, rank);
                    break;
                }
                current = current->right;
            }
        }
    }
}

void Tournament::populateRound1Queues() {
    Teams teamsClass;
    std::string filePath = "Teams.txt";  // Path to the teams file

    if (teamsClass.LoadTeamsFromFile(filePath)) {
        for (int i = 0; i < 8; ++i) {
            queueA.push(teamsClass.GetName(i)); // First 8 teams for Group A
        }
        for (int i = 8; i < 16; ++i) {
            queueB.push(teamsClass.GetName(i)); // Next 8 teams for Group B
        }
    }
}

void Tournament::simulateMatch() {
    pairRoundMatches(); // Pair matches for the current round
}

void Tournament::pairRoundMatches() {
    if (currentRound == 1) {
        int index = 0; // Index for the winners array
        while (!queueA.empty() && !queueB.empty()) {
            std::string team1 = queueA.front();
            queueA.pop();
            std::string team2 = queueB.front();
            queueB.pop();

            currentMatch = new Match(team1, team2, "09:00");  // Reuse Match object
            std::string winner = currentMatch->simulateMatch(); // Simulate match
            writeResultsToFiles(1); // Call to write results to file
            if (index < 8) {
                round1Winners[index++] = winner; // Store the winner in the array
            }
            queueWinnersRound1.push(winner);
        }
        currentRound++;
    }
    else if (currentRound == 2) {
        int index = 0; // Index for the winners array
        while (!queueWinnersRound1.empty()) {
            std::string team1 = queueWinnersRound1.front();
            queueWinnersRound1.pop();
            std::string team2 = queueWinnersRound1.front();
            queueWinnersRound1.pop();

            currentMatch = new Match(team1, team2, "11:00");  // Reuse Match object
            std::string winner = currentMatch->simulateMatch(); // Simulate match
            writeResultsToFiles(2); // Call to write results to file
            if (index < 4) {
                round2Winners[index++] = winner; // Store the winner in the array
            }
            queueWinnersRound2.push(winner);
        }
        currentRound++;
    }
    else if (currentRound == 3) {
        int index = 0; // Index for the winners array
        while (!queueWinnersRound2.empty()) {
            std::string team1 = queueWinnersRound2.front();
            queueWinnersRound2.pop();
            std::string team2 = queueWinnersRound2.front();
            queueWinnersRound2.pop();

            currentMatch = new Match(team1, team2, "13:00"); // Set fixed date/time
            std::string winner = currentMatch->simulateMatch(); // Simulate match
            writeResultsToFiles(3); // Call to write results to file
            if (index < 2) {
                round3Winners[index++] = winner; // Store the winner in the array
            }
            queueWinnersRound3.push(winner);
        }
        currentRound++;
    }
    else if (currentRound == 4) {
        while (!queueWinnersRound3.empty()) {
            std::string team1 = queueWinnersRound3.front();
            queueWinnersRound3.pop();
            std::string team2 = queueWinnersRound3.front();
            queueWinnersRound3.pop();

            currentMatch = new Match(team1, team2, "15:00"); // Set fixed date/time
            std::string winner = currentMatch->simulateMatch(); // Simulate match
            writeResultsToFiles(4); // Call to write results to file
            round4Winners[0] = winner; // Only one match in the final round
            queueWinnersRound4.push(winner);
        }
    }
}

void Tournament::writeResultsToFiles(int round) {
    if (currentMatch != nullptr) {
        currentMatch->writeMatchResult(round); // Use the same match object to write results
    }
}

void Tournament::updateScheduleTablesFromFile(int round, System::Windows::Forms::TableLayoutPanel^ tablePanel) {
    std::string fileName = "Round" + std::to_string(round) + "Data.txt";
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << fileName << std::endl;
        return;
    }

    std::string line;
    int row = 1;  // Start from row 1 because row 0 is fixed as the header

    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string team1, team2, dateTime, status, winner;

        // Parse the line using commas as delimiters
        if (!getline(ss, team1, ',') || !getline(ss, team2, ',') ||
            !getline(ss, dateTime, ',') || !getline(ss, status, ',') ||
            !getline(ss, winner)) {
            std::cerr << "Error parsing line: " << line << std::endl;
            continue;  // Skip invalid lines
        }

        // Find the corresponding label in the TableLayoutPanel based on the round
        System::Windows::Forms::Label^ team1Label = dynamic_cast<System::Windows::Forms::Label^>(tablePanel->GetControlFromPosition(0, row));  // Column 0 for Team 1
        System::Windows::Forms::Label^ team2Label = dynamic_cast<System::Windows::Forms::Label^>(tablePanel->GetControlFromPosition(1, row));  // Column 1 for Team 2
        System::Windows::Forms::Label^ dateTimeLabel = dynamic_cast<System::Windows::Forms::Label^>(tablePanel->GetControlFromPosition(2, row));  // Column 2 for Date/Time
        System::Windows::Forms::Label^ statusLabel = dynamic_cast<System::Windows::Forms::Label^>(tablePanel->GetControlFromPosition(3, row));  // Column 3 for Status
        System::Windows::Forms::Label^ winnerLabel = dynamic_cast<System::Windows::Forms::Label^>(tablePanel->GetControlFromPosition(4, row));  // Column 4 for Winner

        // Update the table with the parsed data
        if (team1Label != nullptr) {
            team1Label->Text = gcnew System::String(team1.c_str());
        }
        if (team2Label != nullptr) {
            team2Label->Text = gcnew System::String(team2.c_str());
        }
        if (dateTimeLabel != nullptr) {
            dateTimeLabel->Text = gcnew System::String(dateTime.c_str());
        }
        if (statusLabel != nullptr) {
            statusLabel->Text = gcnew System::String(status.c_str());
        }
        if (winnerLabel != nullptr) {
            winnerLabel->Text = gcnew System::String(winner.c_str());
        }

        row++;  // Move to the next row
        if (row > tablePanel->RowCount) {
            break;  // Stop if we exceed the number of rows in the table
        }
    }

    file.close();
}

void Tournament::revertToOriginal() {
    for (int i = 1; i <= 4; ++i) {
        std::string fileName = "Round" + std::to_string(i) + "Data.txt";
        std::ofstream outFile(fileName, std::ios::trunc);
        outFile.close();
    }
    currentRound = 1;  // Reset round to 1 for a fresh start
      // Optionally, reset any other tournament state if necessary
    while (!queueWinnersRound1.empty()) queueWinnersRound1.pop();
    while (!queueWinnersRound2.empty()) queueWinnersRound2.pop();
    while (!queueWinnersRound3.empty()) queueWinnersRound3.pop();
    while (!queueWinnersRound4.empty()) queueWinnersRound4.pop();
}

Tournament::~Tournament() {
    // Destructor to clean up any dynamically allocated memory
    // Note: Memory cleanup for the BST can be added here if needed
}
