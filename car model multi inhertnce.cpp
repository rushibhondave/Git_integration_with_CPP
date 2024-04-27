#include <iostream>  
using namespace std;


class vechical
{
	protected:	
		    string company_name;
	public:
		
	    void display()
	{	
		
	    cout<<"\nenter the company_name:";
		cin>>company_name;
		    
	}
			
};


class car:public vechical
{
		         
	protected:
	    int car_id;
		    int car_price;
		       string car_name;
		       
	public:
		
	void accpect()
	{
		
	    cout<<"\nenter the car_id:";
		cin>>car_id;
		
	    cout<<"\nenter the car_price:";
		cin>>car_price;
		
	    cout<<"\nenter the car_name:";
		cin>>car_name;		
		
	}
	
	
};

class bike:public car
{
		         
	protected:
	    int bike_id;
		    int bike_price;
		       string bike_name;
		       
	public:
        void getdata()
    {
        	
        cout<<"\nenter the bike_id:";
		cin>>bike_id;
		
	    cout<<"\nenter the bike_price:";
		cin>>bike_price;
		
	    cout<<"\nenter the bike_name:";
		cin>>bike_name;		     	
        	
	}
	    void putdata()
	    {
	    	cout<<"\nINFORAMTION ABOUT COMPANY & MODELS:"; 
			cout<<"\n";       
	    	cout<<"\nenter the company_name:"<<company_name;
	    	cout<<"\n";  
	    	cout<<"\nenter the car_id:"<<car_id;
		    cout<<"\n";
	    	cout<<"\nenter the car_name:"<<car_name;
			cout<<"\n";
	    	cout<<"\nenter the car_price:"<<car_price;
	    	cout<<"\n";
	    	cout<<"\nenter the bike_id:"<<bike_id;
	    	cout<<"\n";
	    	cout<<"\nenter the bike_name:"<<bike_name;
	    	cout<<"\n";
	    	cout<<"\nenter the bike_price:"<<bike_price;

	
		}
};
 
 
 main()
 {
 	bike e1;
 	
 	e1.display();
 	e1.accpect();
 	e1.getdata();
 	e1.putdata();
 	
 	
 	
 }
 
 
 
 
 
 
 
 
 
 