#include "Shop.h"

Shop& Shop:: Add(Article* x)
{
	items.push_back(x);
	return *this;
}
int Shop :: GetTotalPrice()
{
	int result = 0;
	for (vector<Article*>::iterator it = items.begin(); it != items.end(); it++)
	{
		 result =result+ (((*it)->GetPrice())*((*it)->GetQuantity())) ;
	}
	return result;
}

int Shop:: GetQuantity(string y)
{
	int rezultat = 0;
	for (vector<Article*>::iterator it = items.begin(); it != items.end(); it++)
	{
		if ((*it)->GetType() == y)
		{
			rezultat = rezultat + (*it)->GetQuantity();
		}
	}
	return rezultat;

}

void Shop:: List()
{
	for (auto it = items.begin(); it != items.end(); it++)
	{
		(*it)->Print();
	}
}
