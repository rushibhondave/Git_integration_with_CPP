#include <iostream>  
using namespace std;

class  base
{
	public:
		void display()
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
	
	derived d1            ;
	d1.display();
}