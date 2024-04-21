#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,temp=0;
	cout<<"Enter the 1st Number : :";
	cin>>a;
   cout<<"Enter the 2nd Number : :";
	cin>>b;
	
	for(int i=a;i<b;i++)
	{
	   for(int j=2;j<i;j++)
	   {
	    (i%j==0)?temp++:0;
       } 
	   
	   if20(temp!=0)
	    temp=0;
		else
	   	cout<<i<<endl;
	
	}


}