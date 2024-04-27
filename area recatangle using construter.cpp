#include<iostream>
using  namespace std;

	class rectangle
	{
	private:
		int len;
		  int bre;
 
    public:
    	rectangle();
    	  rectangle(int l,int b);
    	     int area();
    	
};
     
      rectangle::rectangle()
      {
      	len=4;
      	 bre=5;
	  }

        rectangle::rectangle(int l,int b)
       {
       	
       	  len=l;
       	  bre=b;
       	
	   }

        int rectangle::area()
		{
        return len*bre; 
        
    }

int main()
{
	rectangle r1;
     cout<<"\nArea of reactangle:"<<r1.area();
    rectangle r2(5,6);
	   cout<<"\nArea of reactangle:"<<r2.area();
}