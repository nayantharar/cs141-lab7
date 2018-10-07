//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function 
int  printsumodd(int n,int a,int s)

{ 	

	if(a>n)
        {
                 cout<< " sum is "<<s<<endl;
		 return 0;
	} 
 	

	else
        {   
           //the sum is calculated by adding elements in the required order
		s+=a;
		//incrementing
		a+=2;
		//recursive call
		printsumodd(n,a,s);
   		return 0;
	}
	
}
//write the main function
int main()
       {
	//enter the number to give the range 
	int n;
	cout<<" Finding sum of odd natural numbers from 1 to n"<<endl;
	cout<<" Enter n "<<endl;
	cin>>n;
	//calling the recursive function
	printsumodd(n,1,0);
	return 0;
}
