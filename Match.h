#pragma once
#include "Teams.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class Match {
private:
    std::string team1;      // Name of the first team
    std::string team2;      // Name of the second team
    std::string dateTime;   // Date and time of the match
    std::string status;      // Status of the match (Pending/Completed)
    std::string winner;     // Name of the winning team

public:
    // Constructor to initialize the match with two teams and a specific time
    Match(const std::string& t1, const std::string& t2, const std::string& time);

    // Simulate the match and determine the winner
    std::string Match::simulateMatch();

    // Get the name of the winning team
    std::string getWinner() const;

    // Write the match result to the appropriate round file
    void writeMatchResult(int round);
};