#pragma once
using namespace std;
#include <iostream>
#include <string>
class Article
{
public:
	string virtual GetType() = 0;
	int virtual GetQuantity() = 0;
	int virtual GetPrice() = 0;
	void virtual Print() = 0;
};

