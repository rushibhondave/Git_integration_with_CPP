#include <iostream>  
using namespace std;


class factorial
{
	private:
		
		int i,n, fact=1;
		
    public:
     
    void fact()
    {
    	
    	cout<<"Enter the number"<<endl;
        cin>>n;
        
    	for(i=0;i<n;i++)	
	  {
	     fact=fact*n;
	  }
	}
	
	
	void display()
	{
		cout<<"The factorial no is:-"<<fact;
		
	}
   	
};
int main()
{
 
 	 factorial n;
 	n.fact();
 	n.dispaly();
	
}
	
	
	
  