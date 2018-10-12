//This is a c++ program to find the sum of natural numbers 1 to n.

#include <iostream>
using namespace std;
 
//Defining a suitable recursive function. call it Sum. Sum(n)= sum(n-1)+n and so on.

int Sum(int present) {
	if ( present == 1)
	{
		return 1;
	}
	else 
	{
		return present + Sum (present-1);
	}
	}

//asking for input number. present = a

int main () {
	int a;
	cout << "Enter your number." << endl;
	cin >> a ;
	cout << "So the sum of all previous numbers of your number is " << Sum(a) << endl ;
	return 0;
	}


