#pragma once
#include <stdio.h>
class SudokuSolver
{
private:
	int table[9][9];
public:
	int isAvailable(int puzzle[][9], int row, int col, int num);
	
	void inputTable(int* *a);
	int fillSudoku(int puzzle[][9], int row, int col);
	
	SudokuSolver();
	~SudokuSolver();
	void testrun();
	void run();
	int **out();
};

