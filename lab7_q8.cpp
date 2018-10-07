//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function 
int sumdig(int n,int s)
{
	
	if(n==0)
	{	cout<<" sum of digits = "<<s;
		return 0;}
	else
	{	//summing digits from the last 
		s+=(n%10);
		j=(n/10);
		//recursive call
		sumdig(n,s);
		return 0;
	}
}
//main function
int main(){
	//enter any number
	int a;	
	cout<<"\n Enter any number ";
	cin>>a;
	//calling the recursive function
	sumdig(a,0);
	return 0;	
}
