 
//include the library
#include<iostream>
using namespace std;

// recursive function
int fib(int n)
{
	
	if(n==1)
	{
	return 1;
	}
	
	if(n==2)
	{
	return 1;
	}
	
	
	else
	{
	//fibonacci logic
		return fib(n-1)+fib(n-2);
	}
		
		
}
 
//main function
int main()
 {
	//input from user
	int a;	
	cout<<" program to find n th term of the fibonacci series "<<endl;
	cin>>a;
	
	
	//calling recursive function
	fib(a);
	return 0;	
 }
