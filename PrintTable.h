#pragma once
class PrintTable
{
private:
	int **a;
public:
	PrintTable(int **a);
	void Print();
	~PrintTable();
};

