//This is a C++ program to find HCF of two numbers using recursion.
#include <iostream>
using namespace std;

//Our function is of the form f(x,y)=f(y,remainder when x divided by y)
int hcf (int fir, int sec)
{
	if (sec != 0)
	{
		return hcf ( sec , fir % sec );
	}
	else 
	{
		return fir;
	}
}

//asking for input
int main ()
{
	int fir, sec ;
	cout << "Enter your first number." << endl;
	cin >> fir ;
	cout << "Enter your second number." << endl;
	cin >> sec ;
	cout << "Thus the HCF is: " << hcf (fir, sec) << endl;
	return 0;
}
