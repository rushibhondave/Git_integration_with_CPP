//Reverse a String in C++

#include <iostream>
#include <string> 
#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//   string rev1="Rushikesh is boy",ram;
//   char rev;
//   reverse(rev1.begin(),rev1.end());
//   cout<<"Reverse using function :"<<rev1<<endl;
//   
//   //Reverse without using function C++
//   int l=rev1.length();
//   for(int i=0;i<l;i++)
//   {
//   	  rev=rev1[i];
//   	  rev1[i]=rev1[l-1-i];
//      rev1[l-1-i]=rev;
//      
//   }
//    cout<<"Reverse without using function :"<<rev1;
//  
//
//}

int main()
{
   string str="Rushikesh is boy",ram;
   int n=256;
   int count[n]={0};
        
        for(int i=0;i<str.length();i++)
        {
            count[ str [i]]++;
           
        }
        
           for(int i=0;i<n;i++)
        {
            if(count[i]>1)
            {
            	cout<<(char)i<<count[i]<<endl;
            	
			}
           
        }
        
        
      cout<<count<<endl;
  

}