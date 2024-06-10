#include "CountLetter.h"

CountLetter::CountLetter(string name, bool (*p) (char ch)) : name(name), p(p) {}

string CountLetter::GetName()
{
	return name;
}

int CountLetter::Compute(string value)
{
	int result = 0;

	for (const auto ch : value)
	{
		if (p(ch))
		{
			result++;
		}
	}

	return result;
}