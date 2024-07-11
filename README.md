# Solving the Hardest Sudoku Problem (LeetCode Problem 37) - Sudoku Solver in C++

## Overview

This project implements a solution for LeetCode Problem 37, the Sudoku Solver, using C++. The goal is to solve a partially filled 9x9 Sudoku board.

## Features

- Efficient backtracking algorithm to solve the Sudoku puzzle.
- Handles all valid input Sudoku boards.
- Provides a clear and structured solution in C++.

## Requirements

- C++ compiler (e.g., g++, clang)
- CMake (optional, for building the project)

## Usage

1. **Clone the Repository**:
   ```sh
   git clone git@github.com:MustcodeQ/Solving-the-Hardest-Sudoku-Problem-LeetCode-Problem-37---Sudoku-Solver-in-C-.git
   cd Solving-the-Hardest-Sudoku-Problem-LeetCode-Problem-37---Sudoku-Solver-in-C-
Compile the Code:
If you're using a C++ compiler directly:

sh

g++ -o SudokuSolver main.cpp
If you're using CMake:

sh

mkdir build
cd build
cmake ..
make
Run the Program:

sh

./SudokuSolver
Code Structure
main.cpp: The main file containing the implementation of the Sudoku solver algorithm.
Example
Given the following Sudoku board:

diff

5 3 . | . 7 . | . . .
6 . . | 1 9 5 | . . .
. 9 8 | . . . | . 6 .
------+-------+------
8 . . | . 6 . | . . 3
4 . . | 8 . 3 | . . 1
7 . . | . 2 . | . . 6
------+-------+------
. 6 . | . . . | 2 8 .
. . . | 4 1 9 | . . 5
. . . | . 8 . | . 7 9
The solved board will be:

diff

5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
Contributing
Feel free to open issues or submit pull requests if you have suggestions for improvements or find any bugs.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgments
LeetCode for providing the problem statement and platform for practice.
Open-source community for various libraries and tools used in this project.
