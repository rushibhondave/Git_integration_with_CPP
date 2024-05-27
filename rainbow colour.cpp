#include<Stdio.h>
 
 int main()
 {
 	
 	char i;
 	
 printf("Enter the character:\n");
 scanf(" %c",&i);
 


if(i=='r'||i=='R')

	printf("colour is red\n",i);
	
	else if(i=='o'|| i=='O')
		printf("colour is orange\n",i);
		
		else if(i=='y'||i=='y')
			printf("colour is yellow\n",i);
			
				else if(i=='b'||i=='B')
				printf("colour is blue\n",i);
				
				
					else if(i=='i'||i=='I')
					printf("colour is indigo\n",i);
					
					    else if(i=='v'||i=='V')
					    printf("colour is violet\n",i);
							
	


else 
{
	printf("invalid selection");
}
}


