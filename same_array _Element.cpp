#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

same_array()
{
	int n=5;
	int a[n],b[n];
	do{

	cout<<"\nEnter the 1st Array : :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Enter the 2nd Array : :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			temp++;
		}
		 
	}
	
	if(temp==n)
	{
		cout<<"Arrays element is mathcing..."<<endl;
		
	}
	else
	{
			cout<<"Arrays element is not mathcing..."<<endl;
	}
	
    }while(n!=6);
	
}

int main()
{
	same_array();
}