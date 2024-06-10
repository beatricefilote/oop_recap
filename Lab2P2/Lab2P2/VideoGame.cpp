#include "VideoGame.h"
VideoGame::VideoGame(int pret, int cantitate, string platforma, string nume)
{
	price = pret;
	quantity = cantitate;
	platform = platforma;
	name = nume;

}
string VideoGame:: GetType()
{
	return type;
}
int VideoGame:: GetQuantity()
{
	return quantity;
}
int VideoGame:: GetPrice()
{
	return price;
}
void VideoGame::Print()
{
	cout <<type<<" "<<"(PLatform=" << platform << "," << " " << "Name=" << name << ")" << " " << "Price=" << price << " " << "Quantity=" << quantity << endl;
}
