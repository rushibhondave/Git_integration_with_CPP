//Find Duplicate Characters In A String
#include <iostream>
#include <string> 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str="Rushikesh";
	int cnt=0;
	int l=str.length();
	
	for(int i=0;i<l;i++)
	{
		for(int j=1;i<l;j++)
		{
			if(str[i]==str[j])
			{
				cnt++;
				
			}
		}
		cout<<"Repate Agin Charcater is:"<<str[i]<<cnt;
	
	}
}