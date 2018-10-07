//include library
#include<iostream>
using namespace std;
//recursive function declaration and definition
int power(int a,int b,int s,int t)
{
	//terminating condition given by if statement
	if(b == 0)
	{	cout<< a <<" to the power "<< t <<" = "<<s;
         return 0 ;}


	//loop running
	else{
		s*=a;
		b--;
		power(a,b,s,t);
                return 0;
	}
	
}
//main function
int main(){
	//take two inputs from the user
	int a,b;	
	cout<<"\n program to find a to the power b ";
	cout<<"\n Enter a,b ";
	cin>>a>>b;
	//calling the recursive function
	power(a,b,1,b);
	return 0;	
}
