#include<stdio.h>
int main(){

int i,j,sum=0;
int m[3][3]={1,2,0,4,0,8,7,3,6};

printf("declaer the first array:\n");

for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{

printf("%i\t",m[i][j]);


}	
 printf("\n");
	
}	
	
for (i=0;i<3;i++)
{
	sum=0;
for (j=0;j<3;j++)
{

sum=sum+m[i][j];
		
}	
printf("addtion ofrow in matrix:%i\n",sum);
}
}

