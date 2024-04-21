#include<stdio.h>
int main(){
	
int i,count;
int m[10]={1,1,1,1,3,4,8,7,2,6};

printf("first array the ;\n");

for(i=0;i<10;i++)
{
     printf("%i\t",m[i]);	
}

for(i=0;i<10;i++)
{
    if(m[i]==1)
   
    count++;

}	
	
printf("the repeated number is:%i",count);	
	
	
	
	
	
}