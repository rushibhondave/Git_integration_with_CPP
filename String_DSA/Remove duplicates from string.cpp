// Remove duplicates from string
#include <iostream>
#include <string> 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,result="";
 	cout<<"Enter the String:";
    getline(cin,s);
    
    int hash[256]={0};
    for(int i=0;i<s.length();i++)
    {
    	if(hash[s[i]]==0)
    	{
    		hash[s[i]]=1;
    		result+=s[i];
    		
		}
    	
	}
	
		cout<<"Remove duplicates from string:"<<result;
    
    
}