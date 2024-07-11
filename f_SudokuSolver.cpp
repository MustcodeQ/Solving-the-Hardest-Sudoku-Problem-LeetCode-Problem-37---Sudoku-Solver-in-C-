#include <iostream>

bool isValid(char **board, int row, int col, char num)
{
    for (int i = 0; i < 9; ++i)
    {
        if (board[row][i] == num)
            return false;
        if (board[i][col] == num)
            return false;
        if (board[row / 3 * 3 + i / 3][col / 3 * 3 + i % 3] == num)
            return false;
    }
    // this my original version had some issues but now all fixed
    return true;
}

bool solve(char **board)
{
    for (int row = 0; row < 9; ++row)
    {
        for (int col = 0; col < 9; ++col)
        {
            if (board[row][col] == '.')
            {
                for (char num = '1'; num <= '9'; ++num)
                {
                    if (isValid(board, row, col, num))
                    {
                        board[row][col] = num;
                        if (solve(board))
                        {
                            return true;
                        }
                        board[row][col] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(char **board, int boardSize,
                 int *boardColSize)
{
    solve(board);
}

void printBoard(char **board, int boardSize,
                int *boardColSize)
{
    for (int i = 0; i < boardSize; ++i)
    {
        for (int j = 0; j < boardColSize[i]; ++j)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // Initialize the board
    char boardArray[9][9] = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    // Convert the board to a char**
    char *board[9];
    for (int i = 0; i < 9; ++i)
    {
        board[i] = boardArray[i];
    }

    int boardColSize[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};

    // Solve the Sudoku
    solveSudoku(board, 9, boardColSize);

    // Print the solved board
    printBoard(board, 9, boardColSize);

    return 0;
}
