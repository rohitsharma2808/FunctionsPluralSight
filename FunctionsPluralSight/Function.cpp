#include"Utility.h"
#include <iostream>

using namespace std;

int main()
{
	int	x;
	cout << "Eter a number " << endl;
	cin >> x;
	if (Isprime(x))
	{
		cout << "The number is prime\n";
	}
	else
	{
		cout << "The number is not prime\n";
	}

	if (Ismore2Prime(x))
	{
		cout << x << " +2 is also prime\n";
	}
	else {
		cout << x << " +2 is not prime";
	}

}