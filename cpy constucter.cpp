					
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
		
            employe(emoploye  &obj)
            {
             id_no=obj.id_no; 
    		 name=obj.name;
    		 salary=obj.salary;	
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
	
    emoploye e1(1,"johan", 50000);
  
    e1.display();
	
	emoploye e2(e1)	;
	e2.display();
	
	}	