#pragma once
class item
{
private:
	int itemNo;
	char name [20];
	double price;
public:
	item();

	item(int pItemNo, char const pName[]);

	void setPrice(double pPrice);
	double getPrice();

	double calcTotal(int qty);

	~item();
};

