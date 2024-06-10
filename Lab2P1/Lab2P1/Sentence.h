#pragma once
#include "Procesor.h"
#include <vector>

class Sentence
{
	vector<Procesor*> procesators;
	string name;

public:
	Sentence(string input);
	void RunAll();
	void ListAll();
	void Run(string x);
	Sentence& operator +=(Procesor* procesor);
};

