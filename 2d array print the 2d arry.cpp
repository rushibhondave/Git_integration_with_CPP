#include<stdio.h>
int main(){
	
int i,j,sum=0;
int m[3][3]={1,2,3,4,5,6,7,8,9};

printf("declare the array: \n");


 for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {

 printf("%i\t",m[i][j]);																																																																												
	
 }
 printf("\n");
}

 for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 
 sum+=m[i][j];
	
 }	
printf("addtion ofrow is:%i\n ",sum);
}
 
}