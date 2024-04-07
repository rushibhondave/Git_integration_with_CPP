#include<iostream>
#include<bits/stdc++.h>
using namespace std;

inline size()
{
	char ch;int a; short int si;float f;double d;long double lg;
	
	cout<<"Enter the Charcter ::";
	cin>>ch;
	cout<<sizeof(ch)<<endl;
	cout<<int(ch)<<endl;;
	
	cout<<"Enter the Intger ::";
	cin>>a;
	cout<<sizeof(a)<<endl;
	
	cout<<"Enter the short Intger ::";
	cin>>si;
	cout<<sizeof(si)<<endl;
	
	cout<<"Enter the float ::";
	cin>>f;
	cout<<sizeof(f)<<endl;
	
	cout<<"Enter the double ::";
	cin>>d;
	cout<<sizeof(d)<<endl;
	
	cout<<"Enter the long double ::";
	cin>>lg;
	cout<<sizeof(lg)<<endl;
	return 0;
}

int main()
{
	size();
}
