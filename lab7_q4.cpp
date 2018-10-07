//include library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function 
int printsum(int n,int a,int s)

      {	
	if(a>n) 
        {
          cout<< "sum is "<<s;
		return 0;
	}
 	

	else
        {   //the sum is calculated by adding incremented elements one by one
		s+=a;
		a++;
	    // call the function
		 printsum(n,a,s);
   		return 0;
	}
	
     }
//write the main function
int main()
{
	//ask the user for a number
	int n;
	cout<<"\n Finding sum of natural numbers from 1 to n";
	cout<<"\n Enter n ";
	cin>>n;
	//call the recursive function
	printsum(n,1,0);
	return 0;
}
