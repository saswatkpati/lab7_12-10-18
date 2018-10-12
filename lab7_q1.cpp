//This is a program to find power of any number using recursion.
#include <iostream>
using namespace std;

//Defining the function inside function thing. f(x,y) = x^y
//we name the function power

int power(int base, int exp) {
	if ( exp == 0)
	{
		return 1;
	}
	else 
	{
		return base * power (base, exp-1);
	}
	}

//asking for input number. base = a, exp = b

int main () {
	int a, b;
	cout << "Enter your base number." << endl;
	cin >> a ;
	cout << "Enter your exponent number." << endl;
	cin >> b ;
	cout << "So the resultant power of your number is " << power(a,b) << endl ;
	return 0;
	}

