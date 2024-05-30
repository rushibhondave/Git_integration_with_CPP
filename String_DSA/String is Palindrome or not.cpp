#include <iostream>
#include <string> 
#include <bits/stdc++.h>
using namespace std;

// C++ Program to check if a given String is Palindrome or not
int main()
{
   string str="AAAAv";
  
   int flag=0;
   int l=str.length();
   
   for(int i=0;i<str.length();i++)
   {
   	   if(str[i]!=str[l-i-1])
	  {
	  	   	flag=1;
	  	   break;
	  	
	  }  
   }
   
     flag?cout<< "This is not palindrome string":cout<<"This is  palindrome string";

	
}

