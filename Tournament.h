#pragma once
#include <queue>
#include <string>
#include "Teams.h"
#include "Match.h"
#include <iostream>
#include <fstream>
#include <sstream>

class Tournament {
public:
    struct TournamentTeam {
        std::string teamName;
        int rank;
        TournamentTeam* left = nullptr;
        TournamentTeam* right = nullptr;

        TournamentTeam(const std::string& name, int r) : teamName(name), rank(r) {}
    };
    TournamentTeam* root = nullptr;
    Match* currentMatch;  // Pointer to the current match being simulated
    std::queue<std::string> queueWinnersRound1;  // Winners of round 1
    std::queue<std::string> queueWinnersRound2;  // Winners of round 2
    std::queue<std::string> queueWinnersRound3;  // Winners of round 3
    std::queue<std::string> queueWinnersRound4;  // Winners of round 4
    std::queue<std::string> queueA;  // Group A teams
    std::queue<std::string> queueB;  // Group B teams
     // Arrays to store winners for labels
    std::string round1Winners[8]; 
    std::string round2Winners[4];
    std::string round3Winners[2];
    std::string round4Winners[1];
    int currentRound = 1;  // Current round being simulated
    Tournament();  // Constructor
    ~Tournament(); // Destructor
    void loadTeams();  // Load teams from file
    void insertTeam(const std::string& name, int rank);  // Insert team into BST
    void populateRound1Queues();  // Populate queues for round 1
    void simulateMatch();  // Simulate matches based on current round
    void pairRoundMatches();  // Pair matches for the current round
    void writeResultsToFiles(int round); // Write results to file
    void updateScheduleTablesFromFile(int round, System::Windows::Forms::TableLayoutPanel^ tablePanel); // Update schedule tables
    void revertToOriginal();  // Reset the tournament state
};