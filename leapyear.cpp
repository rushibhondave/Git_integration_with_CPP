#include<iostream>
#include<bits/stdc++.h>
using namespace std;

leap()
{
	 int leap;
	 do{
	 
	 cout<<"Enter the year ::";
	 cin>>leap;
	 
	 string result=(leap%4==0||leap%400==0) ? "leap ":"not leap";
	  
	 cout<<"This is "<<result<<" year"<<endl<<endl;
	 
    }while(leap!=0);
}
int main()
{
   leap();
}