# CTF Match Scheduler – GUI App (C++ CLR)

A Windows Forms GUI application developed in C++ CLR to automate one-on-one Capture The Flag (CTF) tournament scheduling, match simulation, and team management. The system allows users to view teams, simulate matches, generate schedules, and manage the tournament state with persistence between sessions.

---

## Features

### Welcome Screen
- Central navigation interface with three primary action buttons and a Credits button
- Credits button displays the list of project contributors

### View Teams
- Loads 16 teams from a hardcoded file
- File format: `Rank, Team Name, Member1 - Member2 - ...`
- Displays each team’s rank, name, and members in the interface

### View Schedule
- Automatically separates teams into:
  - Top 8 → Group A
  - Bottom 8 → Group B
- Simulates the following tournament stages:
  - Playoffs (Top 8 vs Bottom 8)
  - Quarterfinals (8 winners compete)
  - Semifinals (4 winners)
  - Finals (2 winners)
- Matches are determined based on index-based pairing (e.g., 1 vs 2, 3 vs 4, etc.)

### Simulate Matches
- Matches are resolved using randomized logic
- Simulates complete tournament progression until a final winner is declared

### Save and Resume
- All match data and current state are saved to local text files
- On restart, the application resumes the tournament from where it left off

### Reset to Default
- Clears the tournament state and removes saved files
- Allows fresh re-entry into a new tournament cycle

---

## Technologies Used

- C++ with Windows Forms (CLR)
- Local file handling for persistent storage
- Event-driven GUI architecture

---

## File Overview

- `teams.txt` – Team rankings and member information
- `match_schedule.txt` – Stores ongoing match structure
- `final_result.txt` – Stores winner details after final match
- Additional files may be used internally to support tournament state tracking

---

## Credits

This application was developed as part of an academic group project at Air University. Contributor names can be viewed from the application itself via the Credits screen.

---

## Notes

- File paths are currently hardcoded; ensure all required files are placed correctly for full functionality
- Randomization logic is purely for simulation and does not reflect real team performance
- Intended for use in educational and CTF-related training environments

---

## Future Enhancements

- Add user interface for manual team entry
- Add deciding the winner based on team skills and score card added manually or uploaded in it
