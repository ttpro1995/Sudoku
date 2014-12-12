#pragma once
#include <fstream>
using namespace std;
class GetTable
{
private:
	int **a;
public:
	void FromFile(string FileName);
	int**get();
	GetTable();
	~GetTable();
};

