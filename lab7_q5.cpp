//This is a C++ program to find sum of all even numbers in given range using recursion.

#include<iostream>
using namespace std;

//Define the recursive Function
int se(int n)
{
	if(n%2==0)
	{
		if(n==2)
		{
		 	return 2;
		}
		else
		{
//sumeven(n) = n + sumeven(n-2)
		 	return (n + se(n-2));      
		}
	}
	else
	{
		if(n==2)
		{
		 	return 2;
		}
		else
		{
//sumeven(n) = n-1 + sumeven(n-3)
		 	return (n-1 + se(n-3));      
		}
	}
}	

//asking for input
int main(){
	int n;
	cout << "Enter Number: ";
	cin >> n;
	cout << "Sum of all even natural numbers between 1 to " << n << " (including " << n << " if " << n << " is even) is: " << se(n) <<endl;
return 0;
}
