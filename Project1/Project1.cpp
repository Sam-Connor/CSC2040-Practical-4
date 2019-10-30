#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person A = Person("Sam", "Connor", "0", 1999);
	Person B = Person("Tom", "Gould", "5", 1999);

	if (A >= B)
	{
		cout << "A >= B";
	}

	if (A <= B)
	{
		cout << "A <= B";
	}

	

	
}