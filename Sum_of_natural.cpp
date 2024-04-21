#include<iostream>
#include<bits/stdc++.h>
using namespace std;

natual()
{
	double sum=0;
	int start,end;
	
	cout<<"Enter the start number ::";
   cin>>start;
   	cout<<"Enter the end number ::";
   cin>>end;
   for(int i=start;i<=end;i++)
   {
    
	sum+=i;
   	
   }	
   
   cout<<sum;
	
	
}

even()
{
	double sum=0;
	int start,end;
	
	cout<<"Enter the start number ::";
   cin>>start;
   	cout<<"Enter the end number ::";
   cin>>end;
   for(int i=start;i<=end;i++)
   {
     if(i%2==0)
     {
     	sum+=i;
	 }

   	
   }	
   
   cout<<sum;
	
	
}

odd()
{
	double sum=0;
	int start,end;
	
	cout<<"Enter the start number ::";
   cin>>start;
   	cout<<"Enter the end number ::";
   cin>>end;
   for(int i=start;i<=end;i++)
   {
     if(i%2!=0)
     {
     	sum+=i;
	 }

   	
   }	
   
   cout<<sum;
	
	
}

int  main()
{
  even();
  natual();
   odd();
  
}