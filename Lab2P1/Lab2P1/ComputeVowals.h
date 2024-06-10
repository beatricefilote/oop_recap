#pragma once
#include "Procesor.h"

class ComputeVowals : public Procesor
{
	string name;
public:
	ComputeVowals(string name);
	string GetName() override;
	int Compute(string value) override;
};

