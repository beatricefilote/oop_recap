#pragma once
#include "Article.h"
#include <vector>
class Shop 
{
	vector<Article*> items;
public:
	Shop& Add(Article* x);
	int GetTotalPrice();
	int GetQuantity(string y);
	void List();

};

