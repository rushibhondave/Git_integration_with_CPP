#include <iostream>  
using namespace std;


class a
{ 
   public:
       int x;
	   
	   A(int a)
	   {
	   	 x=a;
	   	
		 }  
      
      A(A &i)
      {
      	x=i.x;
	  }
   


};

int main()
A a1(4);
A a2(A1);
cout<<"value:"<<(a2,x)