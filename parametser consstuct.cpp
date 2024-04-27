#include <iostream>  
using namespace std;


class emoploye
{

    private:
    	int id_no;
    	string name;
    	float  salary;
    
    public:
    	
    
			emoploye(int i,string n,float f)
    	{
   		
    		id_no=i;
    		name=n;
    		salary=f;		
		}   
		
            
            
           
            
            
    void display()
        {
        	
        	cout<<"\nid_no:"<<id_no<<endl;
        	cout<<"\nname:"<<name<<endl;
        	cout<<"\nsalary:"<<salary<<endl;
        	cout<<"\n";
        	
        	
		}	
	
};
	int main()
{
	
    emoploye e(1,"johan", 50000);
    e.display();	
	
	}	



	