#pragma once
#include "Article.h"
class Book : public Article
{
	string title;
	string author;
	int price;
	int quantity;
	string type = "Book";
public:
	Book(int pret, int cantitate, string titlu, string autor);
	string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};

