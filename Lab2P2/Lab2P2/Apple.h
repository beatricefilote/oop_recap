#pragma once
#include "Article.h"
class Apple : public Article
{
	string type = "Apple";
	int quantity;
	int price;
	string place;

public:
	Apple(int pret, int cantitate, string origine);
	string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};

