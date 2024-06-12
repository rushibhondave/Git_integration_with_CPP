#include<iostream>
#include<string>
using namespace std;

int main()
{ 
     string str="Rushikesh";
	 char str2[]="Rushi";
	 int flag=0;
     int len1=strlen(str2);
   	int len=str.length();
	
	for(int i=0;i<len;i++)
	{
		if(str[i]==str2[i])
		{
			flag++;
		}
		else
		{
		    flag=0;
		    break;
		}
	}
	 
	 if(flag>1)
	 {
	 	cout<<"String is same";
	 }
	 else
	 {
	 cout<<"String is not same";
	 }
	
	
}