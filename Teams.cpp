#include "Teams.h"
// Function to check if file has correct format and exactly 16 teams
bool Teams::CheckFileAndFormat(const std::string& filePath, Form^ currentForm) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        MessageBox::Show("Error opening file.", "Error", MessageBoxButtons::OK);
        currentForm->Close();  // Close the form after the error message box
        return false;  // File not found or not opened
    }

    std::string line;
    int lineCount = 0;

    // Read each line in the file
    while (getline(file, line)) {
        // Split by commas
        std::stringstream ss(line);
        std::string rankStr, name, members;

        if (!getline(ss, rankStr, ',') || !getline(ss, name, ',') || !getline(ss, members)) {
            file.close();
            MessageBox::Show("Invalid line format in file.", "Error", MessageBoxButtons::OK);
            currentForm->Close();  // Close the form after the error message box
            return false;  // Invalid line format
        }

        // Check if rank is a valid integer
        try {
            int rank = std::stoi(rankStr);
            if (rank < 1 || rank > TOTAL_TEAMS) {
                file.close();
                MessageBox::Show("Rank is invalid. Ensure ranks are between 1 and 16.", "Error", MessageBoxButtons::OK);
                currentForm->Close();  // Close the form after the error message box
                return false;  // Invalid rank
            }
        }
        catch (...) {
            file.close();
            MessageBox::Show("Rank is not an integer.", "Error", MessageBoxButtons::OK);
            currentForm->Close();  // Close the form after the error message box
            return false;  // Invalid rank (not an integer)
        }

        lineCount++;
    }

    file.close();
    if (lineCount != TOTAL_TEAMS) {
        MessageBox::Show("The file must contain exactly 16 teams.", "Error", MessageBoxButtons::OK);
        currentForm->Close();  // Close the form after the error message box
        return false;  // Not the correct number of teams
    }

    return true;  // File is valid and has the correct number of teams
}
// Function to load teams data into arrays
bool Teams::LoadTeamsFromFile(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return false;
    }

    std::string line;
    int i = 0;

    while (getline(file, line) && i < TOTAL_TEAMS) {
        std::stringstream ss(line);
        std::string rankStr, name, members;

        if (getline(ss, rankStr, ',') && getline(ss, name, ',') && getline(ss, members)) {
            ranks[i] = std::stoi(rankStr);  // Convert rank to integer
            teamNames[i] = name;            // Store team name
            teamMembers[i] = members;       // Store members as a string
            i++;
        }
    }

    file.close();
    return i == TOTAL_TEAMS;  // Ensure 16 teams were loaded
}
// Accessor methods to retrieve team details
int Teams::GetTeamCount() {
    return TOTAL_TEAMS;
}

std::string Teams::GetRank(int index) {
    if (index >= 0 && index < TOTAL_TEAMS) {
        return std::to_string(ranks[index]);
    }
    return "";
}

std::string Teams::GetName(int index) {
    if (index >= 0 && index < TOTAL_TEAMS) {
        return teamNames[index];
    }
    return "";
}

std::string Teams::GetMembers(int index) {
    if (index >= 0 && index < TOTAL_TEAMS) {
        return teamMembers[index];
    }
    return "";
}
// Separate teams into Group A and Group B
void Teams::SeparateTeamsIntoGroups(std::string groupA[8], std::string groupB[8]) {
    // Group A: Top 8 teams based on rank
    for (int i = 0; i < 8; i++) {
        groupA[i] = teamNames[i];
    }

    // Group B: Next 8 teams based on rank
    for (int i = 8; i < 16; i++) {
        groupB[i - 8] = teamNames[i];
    }
}
// Function to get team name at a specific rank
std::string Teams::GetTeamNameAtRank(int rank) {
    // Ensure the rank is within valid bounds (1 to 16)
    if (rank >= 1 && rank <= TOTAL_TEAMS) {
        // Find the index of the team with the given rank
        for (int i = 0; i < TOTAL_TEAMS; i++) {
            if (ranks[i] == rank) {
                return teamNames[i]; // Return the team name at that rank
            }
        }
    }
    return ""; // Return an empty string if the rank is invalid
}