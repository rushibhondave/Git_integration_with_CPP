#include <iostream>  
using namespace std;


class factorial  
{

public:

void facto()
{
 
 int i,n,fact=1;
 
cout<<"Enter the number"<<endl;
cin>>n;
	
	
for(i=1;i<n;i++)	
	{
	 fact=fact*i;
	 
	}
	
cout<<"The factorial number is"<<fact;	
	
}



	
};







int main()
{
factorial n1;
n1.facto();	
	
}


