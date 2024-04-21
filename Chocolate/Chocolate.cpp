#include<stdio.h>
#include <stdlib.h>


int main()
{
	
FILE *p;

        int price=1;
        int rs;
        int wrapper_remaining;
        int chocolate_get;
        int chocolate=0;
        int return_chocolate;
        int total_chocolate=0;

p=fopen("Chocolate.txt","w");	

if(p==NULL)
{

 printf("file dose not exsits\n");
 
}
	
	   printf("How much amount you have buy for chocolate'>=10'::");
       scanf("%i",&rs);
	   
	    if(rs>=10)
       {
       	

        printf ("\nEnter the price of a '1' chocolate ::");
        scanf("%i",&price);

        wrapper_remaining=rs/price;
        chocolate_get=rs/price;

      
        while (wrapper_remaining>2)
        {
            return_chocolate=wrapper_remaining/3;
            wrapper_remaining=wrapper_remaining%3+return_chocolate;
            chocolate+=return_chocolate;
            total_chocolate=chocolate+chocolate_get;

        }
        
         printf("\n\nTotal chocolate can be eat with his offer::%i",chocolate);
         printf("\n\nRemaining sWrappers with you are::%i",wrapper_remaining);
         printf("\n\nTotal chocolate can you eat::%i",total_chocolate);
        
        
        
        fprintf(p,"How much amount you have buy for chocolate::10");
        fprintf (p,"\n\nEnter the price of a '1' chocolate ::1");
        fprintf(p,"\n\nTotal chocolate can be eat with his offer::%i",chocolate);
        fprintf(p,"\n\nRemaining Wrappers with you are::%i",wrapper_remaining);
        fprintf(p,"\n\nTotal chocolate can you eat::%i",total_chocolate);

        }
        
        else 
        
        printf("Enter amount is less than ten");
        
        
fclose(p);	
}