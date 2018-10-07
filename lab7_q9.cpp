
//include the library
#include<iostream>
using namespace std;

//declaration and definition of the recursive function 
 int findfac(int a,int n,int s)
{ 	
	 //loop terminator
	if(n>a){
		cout<<" factorial of the given number = "<<s<<endl;
	}
 	else{   //multiplying each element to the previous product
		s*=n;
		//increment
		n++;
		//recursive call
		findfac(a,n,s);	
		return 0;
	}
	return 0;
}
//write the main function
int main()
    {
	//enter any number
	int a;
	cout<<"\n Enter any number ";
	cin>>a;
	//calling recursive function
	findfac(a,1,1);
	return 0;
    }
