#include<stdio.h>
int main(){

int i,r=5,j,count;	
int m[6]={1,2,3,4,0,5};

printf("declare  the array :\n ");

for (i=0;i<6;i++)
{

printf("%i\t",m[i]);
	
	
}	
	
printf("\n");


for (i=0;i<6;i++)
{
	for (j=i+1;j<6;j++)
	{
		if (m[i]+m[j] ==r)
	 	{
	 		printf("pair is %d , %d\n",m[i],m[j]);
		 }
	 	
	}
     

   
}
	
	
	
	
	
	
	
}