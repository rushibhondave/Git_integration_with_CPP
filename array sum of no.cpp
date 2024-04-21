#include<stdio.h>
int main(){

int i,sum;
int marks[5]={10,12,13,14,15};
	

 for(i = 0; i<5; i++)
{

  sum = sum + marks[i];
   
}

for(i=0;i<5;i++)
{
	
printf("%i\t",marks[i]);
}

printf("\naddtion of array:%i",sum);
}