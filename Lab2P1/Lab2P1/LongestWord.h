#pragma once
#include "Procesor.h"

class LongestWord : public Procesor
{
	string name;
public:
	LongestWord(string name);
	string GetName() override;
	int Compute(string value) override;
};

