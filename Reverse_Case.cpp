#include<iostream>                                  
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	cout<<"Enter string: "<<endl;
	cin>>str;
	cout<<"String before changing first letter: "<<str;
	if(str[0]>65 && str[0]<97)
		str[0]=str[0]+32;
	else
		str[0]=str[0]-32;
	
	cout<<" "<<str;
}
