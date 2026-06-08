# Tic-Tac-Toe (XO Game)

A simple console-based Tic-Tac-Toe game written in C++. Two players take turns placing their marks (`X` and `O`) on a 3×3 grid, and the game automatically detects wins and draws.

This project is a great introduction to C++ programming concepts such as arrays, functions, loops, conditional statements, and game logic implementation.

## Features

* Two-player local gameplay
* Interactive console interface
* Automatic win detection
* Draw detection
* Input validation for occupied cells
* Automatic game restart after completion
* Lightweight and beginner-friendly code

## Game Rules

1. The game is played on a 3×3 grid.
2. Player 1 uses **X**.
3. Player 2 uses **O**.
4. Players take turns selecting positions from 1 to 9.
5. The first player to align three symbols horizontally, vertically, or diagonally wins.
6. If all cells are filled without a winner, the game ends in a draw.

## Board Layout

```text id="7jq9ee"
 1 | 2 | 3
___|___|___
 4 | 5 | 6
___|___|___
 7 | 8 | 9
```

## Technologies Used

* C++
* Standard Input/Output Library (`iostream`)
* Console Functions (`conio.h`)

## Project Structure

```text id="pr1m0x"
TicTacToe/
│
├── main.cpp
└── README.md
```

## Compilation

### Using g++

```bash id="9z8k09"
g++ main.cpp -o TicTacToe
```

### Run

```bash id="7s4d6n"
./TicTacToe
```

### Windows (MinGW)

```bash id="l0qfgf"
g++ main.cpp -o TicTacToe.exe
TicTacToe.exe
```

## Gameplay Example

```text id="gw8z9w"
Player 1 (X)
Player 2 (O)

X | 2 | 3
__|___|__
4 | O | 6
__|___|__
7 | 8 | X
```

Winning example:

```text id="09wyri"
X | X | X
__|___|__
O | O | 6
__|___|__
7 | 8 | 9

Player 1 Wins!
```

## How It Works

### Game Board

The board is stored using a character array:

```cpp id="o9isye"
char a[10];
```

Each position initially contains its corresponding number.

### Move Validation

Before placing a mark, the program verifies that the selected position has not already been used.

### Win Detection

The game checks all possible winning combinations:

* Rows
* Columns
* Diagonals

If a winning combination is found:

```cpp id="6xy3g7"
return 1;
```

If all positions are occupied without a winner:

```cpp id="d0c52q"
return 0;
```

Otherwise, the game continues:

```cpp id="iynojh"
return -1;
```

## Learning Objectives

This project demonstrates:

* Arrays
* Functions
* Loops
* Conditional Statements
* Input Validation
* Game Logic Design
* Console Programming
* State Management

## License

This project is open source and available under the MIT License.

---

### Author

**Hussein**

A beginner-friendly C++ project created to practice programming fundamentals and game development concepts.
