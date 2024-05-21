
#include<Stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,ch,exist;
	
	do
	{
	
	printf("Enter the choice::\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulas\n6.Exist::\n");
	scanf("%i",&ch);
	
	
	switch(ch)
	{
		case 1:
			printf("\n\nEnte the array element::\n");
			
			for(i=0;i<3;i++)
			 {
		  		 for(j=0;j<3;j++)
			   	{
				                                                // arithamtic  opetation (+*-/)
				scanf("%i",&a[i][j]);
				
			    }
			
    	   }
    	   
    	   printf("\n\nThe array element::\n");
    	   
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{  
				
				scanf("%i\t",&b[i][j]);
				
			    }
			    
			    printf("\n");
    	    }
    	   
    	   
    	     
    	   
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{
				      c[i][j]=a[i][j]+b[i][j];
				
			    }
			    
			    printf("\n");
			
    	    }
    	    
    	    printf("\n\nAddtion array element::\n");
    	    
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{
				     	printf("%i\n",c[i][j]);
				
			    }
			    
			    printf("\n");
			
    	    }
    	   
    	   
    	   
			  break;
			  
			  
		case 2:
			
			
			  break;
		
		
		
		case 3:
			
			
			  break;
		
		
		
		
		case 4:
			
			
			  break;
		
		
		case 5:
			
			
			  break;
		
		
		case 6:
			
			exist;
			
			  break;
	
		
		
	}
	
   
   }while(ch!=6);
	
	
}


