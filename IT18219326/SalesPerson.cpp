#include "pch.h"
#include "SalesPerson.h"
#include<iostream>
#include<cstring>
using namespace std;


SalesPerson::SalesPerson(int pempNo, char const pName[])
{
	empNo = pempNo;
	strcpy_s(name, pName);
}

void SalesPerson::calcSales(item i1, item i2)
{
	int qty1, qty2;
	cout << "Item quantity sold for for item1: " << endl;
	cin >> qty1;
	cout << "Item quantity sold for for item2: " << endl;
	cin >> qty2;
	float sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);

}

void SalesPerson::printSales()
{
	cout << "Employee No:" << empNo <<endl;
	cout << "sales Price Rs: " << sales << endl;
}

SalesPerson::~SalesPerson()
{
	cout << "Delete Employee: %d" << empNo << endl;
}
