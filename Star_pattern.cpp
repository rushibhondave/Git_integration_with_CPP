#include <iostream>
using namespace std;

pryamid()
{
	int a;
	
	cout<<"Enter the number ::";
	cin>>a;
	
	for(int i=0;i<a;i++)
	{
		 for(int j=a-1;j>i;j--)
		 {
		    cout<<" "; 	
		 }
		 
		 for(int k=0;k<i;k++)
		 {
		 	cout<<" *";
		 }
		 cout<<"\n";
		 
	}
	return 0;
}

int main()
{  
   pryamid();
    	
}