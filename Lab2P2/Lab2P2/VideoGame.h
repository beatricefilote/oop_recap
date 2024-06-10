#pragma once
#include "Article.h"
class VideoGame : public Article
{
	string type = "VideoGame";
	int price;
	int quantity;
	string platform;
	string name;
public:
	VideoGame(int pret, int cantitate, string platforma, string nume);
	string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};

