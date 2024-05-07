#include <iostream>  
using namespace std;

class  base
{
	public:
	virtual	void display()
		{
			cout<<"\n Its a base class";
			
			
		}

	
};

class derived:public base
{
	
	
	public:
		void display()
		{
			cout<<"\n Its a derived class";
			
			
		}
	
};

main()
{
	base *ptr;
	base b1;
	derived d1 ;
	  
	 ptr=&b1;       
	ptr->display();
	
	ptr=&d1;
    ptr->display();
}