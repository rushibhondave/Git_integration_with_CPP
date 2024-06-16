#include<iostream>
#include<string>
using namespace std;

int main()
{ 
     string str="Rushikesh";
	 string str2;
	 
	 char temp=' ';
	 
	 for(int i=0;i<str.length();i++)
	 {
	 
	      if(str[i]==' ')
	      {
	      	cout<<"\n";
		  }
		  else
		  {
		  		   str2=str[i];
		  }
	   	
	 }
	 cout<<str2;
}

