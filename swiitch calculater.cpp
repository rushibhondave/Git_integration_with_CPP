#include<stdio.h>

int main(){
	
float a,b,result;
char op;


printf("enter the fist number:");
scanf(" %f",&a);
printf("enter the second number:");
scanf(" %f",&b);
printf("entre the oprater");
scanf(" %c",&op);	
	
switch(op)
{
	
case'+':
result=a+b;
printf("a+b=%f",result);	
break;
	
case'-':
result=a-b;	
printf("a-b=%f",result);	
break;	
	
	
case'*':
result=a*b;	
printf("a*b=%f",result);	
break;	
	
	
case'/':
result=a/b;	
printf("a/b=%f",result);
break;	
	
	
default:
printf("show the error");	
	
}	
	
	
	
	
	
}