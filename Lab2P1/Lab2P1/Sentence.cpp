#include "Sentence.h"
#include <iostream>

Sentence::Sentence(string input) : name(input) {}

void Sentence::RunAll()
{
	
	for (const auto& p : procesators)
	{
		printf("Name:%s => %d\n", p->GetName().c_str(), p->Compute(name));
	}
}

void Sentence::ListAll()
{
	for (auto it = procesators.begin(); it != procesators.end(); it++)
	{
		cout << "Name:" << (*it)->GetName() << endl;
	}
}

void Sentence::Run(string x)
{
	for(auto it = procesators.begin(); it != procesators.end(); it++)
	{
		if ((*it)->GetName() == x)
		{
			cout << "Name:" << (*it)->Compute(name) << endl;
		}
	}
}

Sentence& Sentence::operator +=(Procesor* procesor) 
{
	procesators.push_back(procesor);

	return *this;
}