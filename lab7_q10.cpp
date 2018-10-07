 
//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function
int fibo(int a,int n=1,int s=1,int s1=0){
	
	if(n==a)
	{	cout<<" The "<<i<<"th term of the fibonacci series is "<<s;}
	else{   //fibonacci logic
		int t=s;
		s+=s1;
		s1=t;
		n++;
		//recursive call
		fibo(a,n,s,s1);
		return 0;
	}
	return 0;
}
 
//main function
int main()
 {
	//input from user
	int a;	
	cout<<"\n program to find n th term of the fibonacci series ";
	cout<<"\n Enter n ";
	cin>>a;
	//calling recursive function
	fibo(a);
	return 0;	
 }
