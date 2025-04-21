#include "Match.h"

// Constructor implementation
Match::Match(const std::string & t1, const std::string & t2, const std::string & time)
    : team1(t1), team2(t2), status("Pending"), dateTime("31/12/24 " + time), winner("") {}

// Simulate the match and randomly select a winner

std::string Match::simulateMatch() {
    // Randomly choose a winner
    int result = rand() % 2;  // Generates 0 or 1
    if (result == 0) {
        winner = team1;  // Team 1 wins
    }
    else {
        winner = team2;  // Team 2 wins
    }
    status = "Completed";  // Update status to completed
    return winner;  // Return the name of the winning team
}

// Get the name of the winning team
std::string Match::getWinner() const {
    return winner;
}

// Write the match result to the appropriate round file
void Match::writeMatchResult(int round) {
    std::string fileName = "Round" + std::to_string(round) + "Data.txt";  // Construct the file name
    std::ofstream outFile(fileName, std::ios::app);  // Open the file in append mode
    if (outFile.is_open()) {
        // Write the match result in the specified format
        outFile << team1 << ", " << team2 << ", " << dateTime << ", " << status << ", " << winner << "\n";
        outFile.close();  // Close the file
    }
    else {
        std::cerr << "Error opening file: " << fileName << std::endl;  // Error handling
    }
}