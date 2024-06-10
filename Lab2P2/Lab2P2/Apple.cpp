#include "Apple.h"
Apple::Apple(int pret, int cantitate, string origine)
{
	price = pret;
	quantity = cantitate;
	place = origine;
}
string Apple:: GetType()
{
	return type;
}

int Apple:: GetQuantity()
{
	return quantity;
}

int  Apple:: GetPrice()
{
	return price;
}
void Apple:: Print()
{
	cout << type << " " << "(from = " << place << ")" << " " << "Price = " << price << " " << "Quantity = " << quantity << endl;
};
