#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#using <System.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Windows::Forms;
class Teams {
public:
    static const int TOTAL_TEAMS = 16;  // Total teams in the competition
    std::string teamNames[TOTAL_TEAMS];
    std::string teamMembers[TOTAL_TEAMS];
    int ranks[TOTAL_TEAMS];
    bool Teams::CheckFileAndFormat(const std::string& filePath, Form^ currentForm);
    bool LoadTeamsFromFile(const std::string& filePath);

    // Accessor methods to retrieve team data
    int GetTeamCount();
    std::string GetRank(int index);
    std::string GetName(int index);
    std::string GetMembers(int index);

    // New function to separate teams into two groups
    void SeparateTeamsIntoGroups(std::string groupA[8], std::string groupB[8]);
    std::string Teams::GetTeamNameAtRank(int rank);
};
