#include <iostream>  
using namespace std;


class student 
{   protected:
	 
	 int roll_no;
	   string name;
	 
	public:

	void accept()
	{
		cout<<"\nenter the roll no:";
		cin>>roll_no;
		
		cout<<"\nenter the name:";
     	cin>>name;
	
	 }
	 	 
};

    class library:public student
{
    	
    protected:
	 
	     int b_id;
	        string b_name;
    	
    public:
	
	void put()
	{
		cout<<"\nenter the b_id:";
		cin>>b_id;
		
		cout<<"\nenter the b_name:";
		cin>>b_name;
	 } 	
	 
	 void display()
	 {
	 	
	 	    cout<<"\nroll no student:"<<roll_no;
			   cout<<"\nname of student:"<<name;
			   
			 cout<<"\n";
			 
	 		cout<<"\nroll no b_id="<<b_id;
			   cout<<"\nnnname ofb_name:"<<b_name;
     }
    	
};

int main()
{
	library l1;
	l1.accept();
	l1.put();
	l1.display();
	
	
}




