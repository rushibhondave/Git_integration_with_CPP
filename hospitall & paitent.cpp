#include <iostream>  
using namespace std;


class hospital
{
   protected:
   	   string hospital_name;
   	    string hospital_address;
   	    
   	public:
   	
	   void get()
	   {
 	   	
         cout<<"\nEnter the name of hosptial:";
		 cin>>hospital_name;
		 
		 cout<<"\nEnter the hosptial adress:"; 
		 cin>>hospital_address;	   	
 	   	
 	   	
		 }	
	
};

class patient:public hospital
{
	
   protected:
   	   string patient_name;
   	    string patient_address;
   	     float bill ,amount=1000,tamount;
   	       int date;
   	    
   	public:
   		
   		void getdata()
   		{
   			cout<<"\nEnter the name ofpatient:";
		    cin>>patient_name;
		    
   			cout<<"\nEnter the patient address:";
		    cin>>patient_address;
   			
   			
   			cout<<"\nEnter the bill:";
		    cin>>bill;
		    
   			
		    cout<<"\nEnter the date:";
		    cin>>date;
		    
		     cout<<"\nEnter the amount:";
		    cin>>date;
   			
		}
		
	
		
	
		void putdata()
		{
		cout<<"\npatient is :"<<patient_name;
		cout<<"\ndate is :"<<date;
		cout<<"\nbill is :"<<bill;
		cout<<"\ntotal amount is:"<<amount;
		     	
			
			
			
		}
		
	
};


main()
{
 
 patient p1;
 p1.get();
 p1.getdata();

 p1.putdata();
	
	
	
}