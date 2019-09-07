#pragma once
#include "item.h"

class SalesPerson
{
private:
	int empNo;
	char name[20];
	double sales;

public:
	SalesPerson(int pempNo, char const pName[]);
	void calcSales(item i1, item i2);
	void printSales();
	~SalesPerson();
};

