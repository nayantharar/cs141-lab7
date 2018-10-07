//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function 

int rev(int n,int a,int s)
     {
	
	if(a==0)
	{if(s==n)
		{cout<<"\n Number is a palindrome";
		return 0;}
	 else
		{cout<<"\n Number is not a palindrome";
		return 0;}
	}
	
	else
	
	{	
		//reversing the number 
		s=(s*10)+(a%10);
		a=(a/10);
		//recursive call
		rev(n,a,s);
		return 0;
	}
	
}
//main function
int main(){
	//input from user
	int a;	
	cout<<"\n Enter any number ";
	cin>>a;
	//calling the recursive function
	rev(a,a,0);
	return 0;	
}
