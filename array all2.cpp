//qetion in mnc
//1)binary sercha
//2)bubble sort
//3)selction 
//4)insection
//5)merge
//6)radik
//7)bukket 
//8)quick



//
//#include<stdio.h>
//
//int main()
//{
//	int i,j,n;
//	int m[3][3];
//	
//	
//	printf("Enter the arry elements::\n ");
//   
//    for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {                                        //2d  print array is
//    	scanf("%i",&m[i][j]);
//    	
//    	
//	  }
//    }
//	
//	
//	printf("\n The arry elements::\n");
//	
//	
//	
//	 for(i=0;i<3;i++)
//    {  
//	  for(j=0;j<3;j++) 
//	  {
//										                                       
//    	printf("\t%i",m[i][j]);
//    	
//    	}
//    	
//    	printf("\n");
//	
//	}
//	
//	
//	
//	
//}








//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],b[3][3],i,j;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }                                                     //Transpose arrays
//	
//	
//	printf("\n");
//	
//	 
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	  
//	  	  b[j][i]=m[i][j];
//		                           
//	    }
//	     
//	  }
//	  
//	  	printf("The Transpose arrays element::\n");
//	  
//	  
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//	  	  
//	  	  	printf("%i\t",b[i][j]);
//		                          
//	    }
//	     printf("\n");
//	  }
//	  
//
//	   
//	     
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],i,j;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{                                                   
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  printf("\n");
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)                                             //lower & upper  matrix
//		{
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  printf("\n");
//	  
//	  
//	  	printf("upper triangle matrix ::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//		  if(i>j)
//		  {
//		  	 printf("0\t");
//		  	
//		  }
//		  
//		  else
//		  {
//		  	
//		  	printf("%i\t",m[i][j]);
//		  	
//		   } 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  
//	  printf("\n");
//	  
//	  
//	  
//	  	printf("lower triangle matrix ::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{
//		  if(i<j)
//		  {
//		  	 printf("0\t");
//		  	
//		  }
//		  
//		  else
//		  {
//		  	
//		  	printf("%i\t",m[i][j]);
//		  	
//		   } 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	  
//	  
//}





//
//#include<stdio.h>
//
//int main()
//{
//	int m[3][3],i,j,sum=0;
//
//	
//	printf("Enter the arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)
//		{                                                   
//	  	scanf("%i",&m[i][j]); 
//		                          
//	    }
//	  }
//	  
//	  printf("\n");
//	  
//	
//		printf("The arrays element::\n");
//	  
//	  for(i=0;i<3;i++)
//	  {
//	  	  for(j=0;j<3;j++)                                         //diagonal  matrix print 
//		{                                                          //diagonal matrix print add
//	  	printf("%i\t",m[i][j]); 
//		                          
//	    }
//	    
//	    printf("\n");
//	  }
//	  
//	  
//	 
//	   
//	   
//	   
//	   
//	  printf("\nThe  diagonal element::\n");
//	  
//	  
//	  for(i=0;i<3;i++)
//	   {
//		   	for(j=0;j<3;j++)
//		   	{
//		   		
//		   		if( i==j ||2-i==j ) // i+j==4
//		   		{
//		   			printf("0\t");
//				}
//				
//				else
//				{
//					printf("%i\t",m[i][j]);
//				}
//		   		
//			}
//			
//			printf("\n");
//	   }
	
	
	
//	  printf("\n addtion of diagonal element::\n");
//	  
//	  
//	  for(i=0;i<3;i++)
//	   {
//		   	for(j=0;j<3;j++)
//		   	{
//		   		
//		   		if(2-i==j)
//		   		{
//		   			printf("%i\t",m[i][j]);
//		   		
//				}
//					sum+=m[i][j];
//				
//		   		
//			}
//			
//			printf("%i",m[i][j]);
//			
//			printf("\n");
//	   }
//}
	  


#include<Stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,ch,exist;
	
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
				     	printf("%i\t",c[i][j]);
				
			    }
			    
			    printf("\n");
			
    	    }
    	   
    	   
    	   printf("\n\n");
    	   
    	   
			  break;
			  
			  
		case 2:
			
			
			
			printf("\n\nEnte the array element::\n");
			
			for(i=0;i<3;i++)
			 {
		  		 for(j=0;j<3;j++)
			   	{
				                                               
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
				      c[i][j]=a[i][j]-b[i][j];
				
			    }
			    
			    printf("\n");
			
    	    }
    	    
    	    printf("\n\nSubtraction array element::\n");
    	    
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{
				     	printf("%i\t",c[i][j]);
				
			    }
			    
			    printf("\n");
			
    	    }
    	   
    	   
    	   printf("\n\n");
    	   
			
			  break;
		
		
		
		case 3:
			
			
			
			printf("\n\nEnte the array element::\n");
			
			
			for(i=0;i<3;i++)
			 {
		  		 for(j=0;j<3;j++)
			   	{
				                                               
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
			  		{  for(k=0;k<i;k++)
			  		  	c[i][j]=a[i][j]*b[i][j];
			  		  	
						
					}
		
			    }
			    
			    printf("\n");
			
    	    }
    	    
    	    printf("\n\n Multiplication array element::\n");
    	      
    	      
    	      for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
		  		{
			  		 for(k=0;k<i;k++)
			  		{
					  
					  printf("%i\t",c[i][j]);
				        
					}
					
				      
				
			    }
			    
			    	printf("\n");
			
    	    }
    	  
    	   
    	   
    	   printf("\n\n");
    	   
			
			
			  break;
		
		
		
		
		case 4:
			
				
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
				      c[i][j]=a[i][j]/b[i][j];
				
			    }
			    
			    printf("\n");
			
    	    }
    	    
    	    printf("\n\n division array element::\n");
    	    
    	   for(i=0;i<3;i++)
			{
		  		 for(j=0;j<3;j++)
			   	{
				     	printf("%i\t",c[i][j]);
				
			    }
			    
			    printf("\n");
			
    	    }
    	   
    	   
    	   printf("\n\n");
    	   
			
			  break;
		

		
		
		case 6:
			
			exist;
			
			  break;
	
		
		
	}
	
   
   }while(ch!=6);
	
	
}


