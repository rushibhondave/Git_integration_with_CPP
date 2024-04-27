#include <iostream>  
using namespace std;


class emoploye
{

    private:
    	int id_no;
    	string name;
    	float  salary;
    
    public:
    	
    	emoploye()
    	{
   		
    		id_no=1;
    		name="johan";
    		salary=50;		
		}    
   
    void display()
        {
        	
        	cout<<"id_no\n"<<id_no;
        	cout<<"name\n"<<name;
        	cout<<"salary\n"<<salary;
        	
        	
		}	
	
};
	int main()
{
	
    emoploye e;
   e.display();	
	
	}	
	









