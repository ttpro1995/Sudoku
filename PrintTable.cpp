#include "PrintTable.h"
#include <stdio.h>

PrintTable::PrintTable(int **a)
{
	this->a = a;
}


PrintTable::~PrintTable()
{
	for (int i = 0; i < 9; i++)
		delete[]a[i];
	delete[]a;
}

void ::PrintTable::Print()
{
	int i, j;
	printf("\n+-----+-----+-----+\n");
	for (i = 1; i<10; ++i)
	{
		for (j = 1; j<10; ++j) printf("|%d", a[i - 1][j - 1]);
		printf("|\n");
		if (i % 3 == 0) printf("+-----+-----+-----+\n");
	}
}