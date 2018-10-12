//This is a program to find factorial of any number using recursion.
#include <iostream>
using namespace std;

//Using Tail end recursion
//Defining the function inside function thing. f(x)=x*f(x-1)

int factorial(int n) {
	if (n > 1)
	{
		return n*factorial(n-1);
	}
	else 
	{
		return 1;
	}
	}

//asking for input number

int main () {
	int n;
	cout << "Enter the number whose factorial is to be found." << endl;
	cin >> n ;
	cout << "So the factorial of your number is " << factorial(n) << endl ;
	return 0;
	}
