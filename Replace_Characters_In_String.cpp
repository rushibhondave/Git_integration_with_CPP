#include<iostream>
using namespace std;
int main()
{
	const int len=10;
	char name[len];
	char c1,c2;
	
	cout<<"enter a string"<<endl;
	cin>>name;
	
	cout<<"enter the characterto be replaced";
	cin>>c1;
	cout<<"enter character which u want to replaced";
	cin>>c2;
	
	char*ptr;
	ptr=name;
	
	for(int i=0;i<len;i++)
	{
		if(c1==*(ptr+i))
		*(ptr+i)=c2;
		
	}
	
	cout<<name<<endl;
	return 0;
}
