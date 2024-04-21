#include<stdio.h>
int main(){
	

int i,j,greater;
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
	greater=m[0][0];
for (i=0;i<3;i++)
{
	
for (j=0;j<3;j++)
{
if ( m[i][j]>greater){
	
	greater=m[i][j];
}
}

}	
printf("Greater number is:%i\n",greater);
}	
	
	
	
	
