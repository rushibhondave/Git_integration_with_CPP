#include<stdio.h>
int main(){
	
int i,even=0,odd=0, count;
int m[5]={10,12,13,14,15};
	
	
printf("first array is \n");
for(i=0;i<5;i++)
{
	printf("%i\t",m[i]);
}	

	
for(i=0;i<5;i++)
{
 if(m[i]%2==0 )
 
 even++;  //even=even+1
 
 else
 
 odd++;

}
 printf("\neven no count=%i",even);
 printf("\nodd no count=%i",odd);
}