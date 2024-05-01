#include <iostream>  
using namespace std;


class cube
 
{   
    private:
	
	     int v;
	
	public:
	   cube();
	   cube(int i);
	   
	   int volume();
	    
	    cube(cube&obj)
		{
			v=obj.v;
			}	
    	
};

     cube::cube()
	 {
	 	
	 	v=4;
	 }


     cube::cube(int i)
     {
     	
     	 v=i; 
     	
	 }
	 
int cube::volume()
	 {
	 	 return v*v*v;
	 }
	 
	 
int main()
{
	    cube r1;
	      cout<<"volume of cube:"<<r1.volume();
	     cube r2(5);
	     cout<<"\nvolume of cube:"<<r2.volume();
	     
	     cube r3(r2);
	      cout<<"\ncopy volume of cube:"<<r3.volume();
	     
	 }	 
	 