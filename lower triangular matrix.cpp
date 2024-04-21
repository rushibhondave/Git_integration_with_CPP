#include<stdio.h>
int main(){
	
int i,j;
int m[3][3]={1,2,3,4,5,6,7,8,9};
	
printf("brfore matrix array:\n");

for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{

printf("%i\t",m[i][j]);

}
printf("\n");
}		

printf("matrix  array :\n");
for (i=0;i<3;i++)
{
for (j=i+1;j<3;j++)
{
m[i][j]=0;

}
}
for (i=0;i<3;i++)
{
	
for (j=0;j<3;j++)
{

	
printf("%i\t",m[i][j]);
		
}
printf("\n");
}	
	
	
}