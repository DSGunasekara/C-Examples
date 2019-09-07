#include "pch.h"
#include "item.h"
#include<iostream>
#include<cstring>
using namespace std;

item::item()
{
}


item::item(int pItemNo, char const pName[])
{
	itemNo = pItemNo;
	strcpy_s(name, pName);
}

void item::setPrice(double pPrice)
{
	price = pPrice;
}

double item::getPrice()
{
	return price;
}

double item::calcTotal(int qty)
{
	return qty*price;
}

item::~item()
{
	cout << "Item No: " << itemNo << " deleted" << endl;
}
