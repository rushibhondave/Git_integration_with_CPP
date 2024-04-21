#include<stdio.h>
int main(){
	
int i,n=5;
int m[5]={71,32,83,94,50};

printf("first array is:\n");	
for(i=0;i<5;i++)
{
     printf("%i\t",m[i]);	
}	
printf("\n revrse array is:\n");

  
for(i=n-1;i>=0;i--)
{
   	    printf("%i ", m[i]);
}

}