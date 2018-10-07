//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function
int printnum(int n,int a)

{ 	//loop terminator
	if(a>n)

       {
          return 0;
       }
 	//loop running
	else
       {
	//printing the numbers in the increasing order
		cout<<a<<endl;
		a++;
	//call function
		printnum(n,a);	
		return 0;
	}
	
}
//write the main function
int main()
{
	//ask the user for any number
	int a;
	cout<<"\n Enter any number ";
	cin>>a;
	//call the function
	printnum(a,1);
	return 0;
}
