#include <iostream>  
using namespace std;


class employe
{

    protected:
  	    int id;
  	      float bs;
  	           string name;
  	              string profession;
  	
    public:
  	
  	    void put()
		  {
		  
  	        cout<<"\nEnetr the emoploye id";
			cin>>id;
	  	    cout<<"\nEnetr the emoploye bsasic salaray";
			cin>>bs;
	  	    cout<<"\nEnetr the emoploye name";
			cin>>name;
	  	    cout<<"\nEnetr the emoploye profession";
			cin>>profession;
         }
};

class salaray:public employe 
{

    protected:
    	
  	    float hra, da, pf,Ts=0;
  	     
    public:
	
	  
	   
	   void calculate()
	   {
	
	   	 hra=bs*0.20/100;
	   	 da=bs*0.5/100;
	   	 pf=bs*0.11/100;
	   	
	   	 Ts=bs+ hra + da-pf;
	   	 }
	   	 
	   	 void display()
	   	 {
			
	   	 cout<<"Total salary is "<<Ts;
	   	cout<<"\n";
	   	  cout<<"\nEnetr the emoploye name"<<name;
	   	  cout<<"\n";
	   	   cout<<"\nEnetr the emoploye id"<<id;
	   	    cout<<"\n";
        }
};


main()
{


 salaray e1;

e1.put();
e1.calculate();
e1.display();


}



 