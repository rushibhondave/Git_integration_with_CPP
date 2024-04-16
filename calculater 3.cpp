#include <iostream>
using namespace std;

int main() {


int a,b,result;
char op;

cout<<"enter 1st number the number"<<endl;
cin>>a;
cout<<"enter 2st number the number"<<endl;
cin>>b;
cout<<"ente the operater"<<endl;
cin>>op;
switch(op)
{
	
	
case '+':
result=a+b;
break;

case '-':		
result=a-b;
break;
	
case '*':		
result=a*b;
break;
	
case '/':
result=a/b;
break;

case '%':			
result=a%b;
break;

default:
cout<<"plese press correct key";

}


cout<<"the result is="<< result;

}