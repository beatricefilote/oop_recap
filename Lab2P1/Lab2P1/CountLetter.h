#pragma once
#include "Procesor.h"

class CountLetter : public Procesor
{
	string name;
	bool (*p) (char ch);
public:
	CountLetter(string name, bool (*p) (char ch));
	string GetName() override;
	int Compute(string value) override;
};

