#include "ComputeVowals.h"

ComputeVowals::ComputeVowals(string name) : name(name) {}

string ComputeVowals::GetName()
{
	return name;
}

int ComputeVowals::Compute(string value)
{
	string vowals = { "aAeEiIoOuU" };
	int result = 0;

	for (const auto ch : value)
	{
		if (vowals.find(ch) != string::npos)
		{
			result++;
		}
	}
	
	return result;
}