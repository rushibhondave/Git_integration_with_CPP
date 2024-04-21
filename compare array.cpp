#include<stdio.h>
#include<string.h>
int main(){
	
int a,l,flag=0,i;
char m[10];
char s[10];

printf("enter the word:\n");
scanf("%s%s",m,s);
	
//l=strlen(m);
//l=strlen(s);

for(i=0;m[i]!='\0' || s[i]!='\0';i++)
{
    if(s[i]!=m[i])
    {
    	flag=1;
    	printf("not equal strings");
    	break;
	}
}
if(flag==0)
{
	printf("equal strings");
}
	
}