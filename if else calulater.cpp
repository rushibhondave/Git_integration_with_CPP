#include<Stdio.h>
 
 int main()
 {
 	int a,b,sum=0;
 	char op;
 	
 printf("Enter the number first no:\n");
 scanf("%i",&a);
 
 printf("Enter the number second no:\n");
 scanf("%i",&b);
 
 printf("enter the operater:+,-,*,/,%\n");
 scanf(" %c",&op);
 
 
 
 
 
if(op=='+')
{
	sum=a+b;
 printf("Addition of two no:=%d",sum);	
	
}


else if(op=='-')
{
	sum=a-b;
 printf("subtraction of two no:%d",sum);	
	
}

else if(op=='*')
{
	sum=a*b;
 printf("multiplication of two no:%d",sum);	
	
}

else if(op=='/')
{
	sum=a/b;
 printf("Divide of two no:%d",sum);	
	
}

else if(op=='%')
{
	sum=a%b;
 printf("Modulas of two no:%d",sum);	
	
}

else
{
 
 printf("oparater is not avilable");
	
}
 	
}