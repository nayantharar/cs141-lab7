//include the library
#include<iostream>
using namespace std;

//declaration and definition of recursive function 
	int printeven(int a,int n=2){
	//loop terminator
	if(a<n)
	 { return 0;
         }  
	else
       {    //print even numbers
		cout<< n <<endl;
		n += 2;
	    //recursive call statement
		printeven(a,n);
		return 0;
	}
	
}
//write the main function
int main()
{
	//enter the number till which you need to print
	int a;	
	cout<<" enter the number till which you need to print "<< endl;
        cin>>a;
        cout<<"the numbers are"<<endl; 
	
	//calling the recursive function
	printeven(a);
	return 0;	
}
