#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//
// SI()
//{
//	int pi,t;
//	double r,Si;
//	cout<<"Enter the principle amount ::";
//	cin>>pi;
//	cout<<"Enter the Time Period ::";
//	cin>>t;
//	cout<<"Enter the Intrest ::";
//	cin>>r;
//	
//	Si=(pi*t*r)/100;
//	cout<<"You pay this amount ::"<<Si+pi<<endl;
//	return 0;
//	
//}
 CI()
{
	
	int pi,t,Ci;
	double r,Amount;
	cout<<"Enter the principle amount ::";
	cin>>pi;
	cout<<"Enter the Time Period ::";
	cin>>t;
	cout<<"Enter the Intrest ::";
	cin>>r;
	
	Amount= pi*((pow((1 + r / 100), t)));;	
	double sum=pi+Amount;
	cout<<"Compound Intrest is ::"<<Amount-pi<<endl;
	cout<<"You pay this amount ::"<<sum;
		return 0;
	
}
int main()
{
//	SI();
	CI();
}