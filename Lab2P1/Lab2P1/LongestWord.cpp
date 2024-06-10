#pragma once
#include "LongestWord.h"

LongestWord::LongestWord(string name) : name(name){}

string LongestWord::GetName()
{
	return name;
}

int LongestWord::Compute(string value)
{
	string separators { " .,?!" };
	int result = 0;
	int wordLenght = 0;

	for (const auto ch : value)
	{
		if (separators.find(ch) == string::npos)
		{
			wordLenght++;
		}
		else
		{
			if (wordLenght > result)
			{
				result = wordLenght;
			}
			wordLenght = 0;
		}
	}

	return result;
}