#include <iostream>  
using namespace std;


class part
{  
    private:
	  int part_id;
    	int part_prize;
         string part_name;
	         string part_class;
	
    public:

        part(int i,int p,string c)
        {
        	
         part_id=1;
        	part_prize=100;
	          part_name="Touchpad";	
	  
        } 
        
        part(part&obj)
        {
        	part_id=obj.part_id;
        	  part_prize=obj.	part_prize;
	            part_name=obj.part_name;
        	 
		}
                 
    void display()
        {
   
        	cout<<"\part_id:"<<part_id<<endl;
        	   cout<<"\npart_prize:"<<part_prize<<endl;
        	     cout<<"\npart_name:"<<part_name<<endl;
        	         cout<<"\n";
        }
	
};

int main()
{
	part e1(1,100,"motor");
	   e1.display();
	     part e2(e1);
	         e2.display();
	
}

