//
//
//#include<stdio.h>
//
//int main()
//{
//	int i,j,n;
//	int a[3][3], b[3][3], c[3][3];
//	
//	
//	printf("Enter the 1 arry elements::\n ");
//   
//    for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {                                        //2d  array is
//    	scanf("%i",&a[i][j]);
//    	
//    	
//	  }
//    }
//    
//    printf("Enter the  2 arry elements::\n ");
//   
//    for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {                                        //2d  addtion array is
//    	scanf("%i",&b[i][j]);
//    	
//    	
//	  }
//    }
//    
//  
//   
//   
//    
//    for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {                                        
//         c[i][j]=a[i][j]+b[i][j];
//         
//    	  printf("%i",c[i][j]);
//    	
//	  }
//	  
//    }
//    
////    printf("\nTotal ans is::%i\n ",c[i][j]);
//    
//    
//    
//}






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
			printf("\n\nEnte the 1st array element ::\n");
			
			for(i=0;i<3;i++)
			 {
		  		 for(j=0;j<3;j++)
			   	{
				
				scanf("%i",&a[i][j]);
				
			    }
			
    	   }
    	   
    	   
    	   printf("\n\nEnte the 2nd array element  ::\n");
			
			for(i=0;i<3;i++)
			 {
		  		 for(j=0;j<3;j++)
			   	{
				
				scanf("%i",&b[i][j]);
				
			    }
			
    	   }
    	   
//    	   printf("\n\nThe array element::\n");
//    	   
//    	   for(i=0;i<3;i++)
//			{
//		  		 for(j=0;j<3;j++)
//			   	{
//				
//				printf("%i\t%i\t",a[i][j],b[i][j]);
//				
//			    }
//			    
//			    printf("\n");
//    	    }
    	   
    	   
    	    
    	   
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{
				      c[i][j]=a[i][j]+b[i][j];
				
			    }
			    
			    printf("\n");
			
    	    }
    	   
    	    printf("\n\nAddtion array element::%i\n",c[i][j]);
    	    
    	    printf("\n\n");
    	   
    	   
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


