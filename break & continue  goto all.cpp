#include<iostream>
using namespace std; 

//break
int main()
{
	
	int i;
	
	for(i=1;i<=10;i++)
	{  
	    if(i==8)
	    break;
	     
		printf("%i\n",i);	
	}
	

	
	
	
	
}



//continue

#include<iostream>
using namespace std; 

int main()
{
	
	int i;
	
	for(i=1;i<=10;i++)
	{  
	    if(i==5)
	    continue;
	     
		cout<<i;
	}
	
	
	
}


//go to statement
#include<iostream>
using namespace std; 

int main()
{
		
	int i,sum=0;
	
	for(i=1;i<=10;i++)
	 {
	 	
	 	sum+=i;
	 	if(i==5)
	 	
	 	goto jump;
	 	
	 
	 }
	
	jump:
	
	cout<<"sum"::<<sum;
	
	
	

}