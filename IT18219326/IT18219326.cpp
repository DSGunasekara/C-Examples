

#include "pch.h"
#include <iostream>
#include "item.h"
#include "SalesPerson.h"
using namespace std;

int main()
{
	SalesPerson s1(100, "Ajith");
	SalesPerson s2(200, "Saman");

	item item1(10, "Milk");
	item item2(11, "Milk Powder");

	item1.setPrice(200);
	item2.setPrice(500);

	s1.calcSales(item1, item2);
	s1.printSales();
}

