//This is a C++program to print all even or odd numbers in given range using recursion.

#include<iostream>
using namespace std;

//asking for input
int main(){
	int low,up;
	cout<<"Enter lower limit: ";
	cin>>low;
	cout<<"Enter upper limit: ";
	cin>>up;
	
	if(low%2==0){
		cout << "Even Numbers from "<< low <<" to "<< up <<endl;
   		cout << f(low,up) << endl;
		cout << "odd Numbers from "<< low <<" to "<< up <<endl;
   		cout << g(low,up) << endl;
 	}

	else{
		cout << "Odd Numbers from "<< low <<" to "<< up <<endl;
   		cout << f(low,up) << endl;
		cout << "Even Numbers from "<< low <<" to "<< up <<endl;
   		cout << g(low,up) << endl;
 	}


return 0;
}	

//defining the recursive function.
int f(int l,int u){
	if(l<u)
	{
		cout << l << endl;
		f(l+2,u);
	}
}

int g(int l,int u){
	if(l<u)
	{
		cout << l+1 << endl;
		g(l+2,u);
	}
}


