#include<iostream>
#include<string>
using namespace std;
int  main()
{
	 string str="Rushikesh";
	 char str2[]="Rushi";
	 int len1=strlen(str2);
	int len=str.length();

	 
	for(int i=0;i<len1/2;i++)
	 {
    	swap(str[i],str[len1-1-i]);
	 }
   
    cout<<"Swap Function::"<<str<<endl;
	  
	  
	  
     for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
	 
	 
	 cout<<"Without inbuilt Function::"<<str<<endl;


	 
}