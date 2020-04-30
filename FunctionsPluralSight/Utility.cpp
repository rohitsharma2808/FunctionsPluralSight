#include"Utility.h"
#include<iostream>
using namespace std;

bool Isprime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x/i ; i++)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			cout << "Factor found " << factor << endl;
			prime = false;
			break;

		} 
	}
	return prime;

}

bool Ismore2Prime(int x)
{
	x = x + 2;
	return Isprime(x);
}