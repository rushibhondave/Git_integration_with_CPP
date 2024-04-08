#include<iostream>
using namespace std; 

int main()
{	
int m[5]={10,15,17,15,19};
int t[5]={15,18,11,14,10};
int i,sum=0;

cout<<"The 1st array is:"<<endl;
for(i=0;i<5;i++)
{
	
cout<<m[i]<<"\t";
		
}
	
cout<<"\n";	
	
cout<<"The 2nd array is:"<<endl;
for(i=0;i<5;i++)
{
	cout<<t[i]<<"\t";
}
	
	
for(i=0;i<5;i++)
{
	
sum=m[i]+t[i];	

}

cout<<"\n";
		
cout<<"Addtion of array is:"<<endl;

for(i=0;i<5;i++)
{
cout<<i<<":"<<sum;	
}
}
	
	

	
	
