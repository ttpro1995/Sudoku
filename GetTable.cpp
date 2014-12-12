#include "GetTable.h"
using namespace std;

GetTable::GetTable()
{
	a = new int*[9];
	for (int i = 0; i < 9; i++)
	{
		a[i] = new int[9];
	}
}


GetTable::~GetTable()
{
}

void ::GetTable::FromFile(string FileName)
{
	ifstream fin;
	fin.open(FileName);
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			
			fin >> a[i][j];
		}
}

int** ::GetTable::get()
{
	return a;
}