#include <iostream>  
using namespace std;


class AddAmount
{
	
		private:
			int amount=50;
			
        public:
        	AddAmount();
                AddAmount(int i);
        void  display(); 
				
				
				
		                         		    			
};


	        AddAmount::AddAmount()
	        {
	        	
	        	int a=50;
	        	
			}
			
			
			AddAmount::AddAmount(int i)
			{
				
				amount=i+amount;
			}
			
			
		
	   void     AddAmount :: display()
			{
				cout<<"\nTotal cash in piggi bank is"<<amount;
			
			}
	
			
			
			
int main()
{
  AddAmount a1;
    a1.display();
  
  AddAmount a2(100);
  	a2.display();
  
  AddAmount a3(a2);
    a3.display();
  
  
}			
			
			
			
		
//		
//			AddAmount(AddAmount&obj)
//			{
//				 amount=obj.amount;	
//					
//			}     			
//			