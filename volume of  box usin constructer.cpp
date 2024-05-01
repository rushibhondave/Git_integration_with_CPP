#include <iostream>  
using namespace std;


class box
{	
	private:
		int len;
		  int wid;
		     int hei;
	
	public:
		box();
		  box(int l,int w,int h);
		     int volume();
		
};
   
        box ::box()
        {
        	len=5;
        	wid=6;
        	hei=8;
        	
       	}
       	
    box ::box(int i,int w,int h)
    {
    	 len=i;
		 wid=w;
		 hei=h;                      
    	                       
	}
	
	int box ::volume()
	{
		return len*wid*hei;
	}
	
	
	
int main()
{  box r1;
	      cout<<"volume of box:"<<r1.volume();
   box r2(6,6,6);
	     cout<<"\nvolume of box:"<<r2.volume();
	     
   box r3(r2);
	      cout<<"\ncopy volume of bov:"<<r3.volume();
	     
	 }	 
	
	