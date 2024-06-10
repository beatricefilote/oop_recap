#include "Book.h"
Book::Book(int pret, int cantitate, string titlu, string autor)
{
	price = pret;
	quantity = cantitate;
	title = titlu;
	author = autor;
}
string Book:: GetType()
{
	return type;
}
int Book:: GetQuantity()
{
	return quantity;
}
int Book:: GetPrice()
{
	return price;
}
void Book:: Print()
{
	cout << type << " " << "(Ttile=" << " " << title << "," << " " << "Author=" << author << ")" << " " << "Price=" << price << endl;
}