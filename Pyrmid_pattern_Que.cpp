#include<iostream>
using namespace std;

int main(){

int a,i,j;

cout<<"Enter the number of rows:-";
cin>>a; 

for(i=0;i<a;i++)
{
   
   for(j=a-1;j>=i;j--)
   {
   	
   	cout<<" ";

   	
   }
   
   	for(int k=0;k<=i;k++)
	{
		 	cout<<" *";
	}

   
   cout<<endl;
   	
}
}