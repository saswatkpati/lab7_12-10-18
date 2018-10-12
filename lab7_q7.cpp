//This is a C++ program to check whether a number is palindrome or not using recursion.
#include <iostream>
using namespace std;

//asking for input data

int main()
{
	int num, ulta;
	cout << "What is the number that you need to check? " << endl;
	cin >> num;
	int badanum = num;
	return 0;
}

//recursive function structure

int fun (int badanum, int ulta)
{
	if (ulta == badanumb)
	{
		cout << "Its a palindrome" << endl;
	}
	else 
	{
		cout << "Its not a palindrome" << endl;
	}
	return 0;
}

int ultafun (int num,int ulta,int badanum)
{
	ulta = 10*ulta + (num % 10);
	num = num/10
	return ultafun (num, ulta, badanum);
}

