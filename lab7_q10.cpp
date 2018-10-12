//This is a C++ program to generate nth Fibonacci term using recursion.
//Fibonacci sequence= 1,1,2,3,5,8,13....
//including library
#include<iostream>
using namespace std;

//Define function for nth term of fibonacci series 
//over function is f(n)=f(n-1)+f(n-2)

int f(int n){
	if(n==1){
		 return 0;			
	}
	else if(n==2){			
		 return 1;
	}
	else{
		 return (f(n-1)+f(n-2));     
	}	
}

//asking for input
int main(){
	int n;
	cout << "Enter your n: ";
	cin >> n;
	cout << n <<" nth term of fibonacci series is: " << f(n) <<endl;
return 0;
}
