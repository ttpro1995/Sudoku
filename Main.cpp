#include "SudokuSolver.h"
#include "GetTable.h"
#include "PrintTable.h"
int main()
{
	/*
	Put sudoku in sudoku1.txt in same directory of .exe file
	if it is empty square, type 0
	result will show on screen when run
	*/
	


	SudokuSolver solver;
	GetTable geter;
	geter.FromFile("sudoku1.txt");
	solver.inputTable(geter.get());
	solver.run();
	
	PrintTable printer(solver.out());
	printer.Print();
	

	return 0;
}