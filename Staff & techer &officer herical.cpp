#include <iostream>  
using namespace std;

class staff
{
	protected:
		  int code;
		  string name;
		  
	public:
		  void get()
		  {	
		  	cout<<"\nEnter the staff name::";
		  	cin>>name;
		  	
		  	cout<<"\nEnter the staff code::";
		  	cin>>code;
		  
		  }
		  void put()
		  {
		  	cout<<"\n sataff Name::"<<name;
		  	cout<<"\nsatf code::"<<code;
		  }
		  
};


class teacher:public staff
{
	protected:
         string name;
          string subject;
          
    public:
		  void getdata()
		  {	
		      cout<<"\nEnter the teacher name::";
		      cin>>name;
		      
		      cout<<"\nenter the subject::";
		      cin>>subject;
		  }
		  
		  void putdata()
		  {
		  	 cout<<"\nteacher name::"<<name;
		  	 cout<<"\ntecher teach subject"<<subject;
		  	 
		  	
		  }
};


class officer:public staff
{

	protected:	
		string grade;
		
	public:
		
		void accept()
		{
			
			cout<<"\nenter the grade::";
			cin>>grade;
		}
		
		void display()
		{
			
			cout<<"\n the grade::"<<grade;
		}
		
};

main()
{
	 teacher e1;
	 e1.get();
	 e1.put();
	 e1.getdata();
	 e1.putdata();
	 
	 officer o1;
	 o1.accept();
	 o1.display();
 	
	
}