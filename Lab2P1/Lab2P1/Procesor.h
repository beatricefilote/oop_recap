#pragma once
#include <string>

using namespace std;

class Procesor
{
public:
	string virtual GetName() = 0;
	int virtual Compute(string value) = 0;
};

