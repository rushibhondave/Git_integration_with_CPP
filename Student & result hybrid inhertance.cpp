#include <iostream>  
using namespace std;

class student 
{

    protected:
      
      int id;
      string name;
         int roll_no;
    
    public:
    	
    	void get()
    	{
    		
    		cout<<"Enter the studen id ::";
    		cin>>id;
    		cout<<"\nEnter the studen roll no::";
    		cin>>roll_no;
    		cout<<"\nEnter the studen Name::";
    		cin>>name;
		}
		
		 void put()
		 {     cout<<"\n";
		 	   cout<<"\nstudent name::"<<name;
		 	   cout<<"\n";
		 	   cout<<"\nstudent id::"<<id;
		 	   cout<<"\n";
			   cout<<"\nstudent roll no::"<<roll_no;
			   cout<<"\n";
		 	
		 	
		 }
		
};


class test:public student
{
	
	protected:
  
       float part_1,part_2;
           
    
    public:
    	
	 
	  
	void getdata()
	
	{
		cout<<"\nEnter the test no of part 1 ::";
		cin>>part_1;
		
		cout<<"\nEnter the test no of part 2 ::";
		cin>>part_2;
		
	}
	
	void putdata()
	{
		
		cout<<"\n\ntest score  of part 1 ::"<<part_1;
			
		cout<<"\n\ntest score  of part 2 ::"<<part_2;
   }
		
		
};


class sport
{
	private:
		
		
	public:
		
		float score;
		
		void accept()
		{
			 cout<<"\n\nEnter the sport score::";
			 cin>>score;
			
		}
		
		void display()
		{
			
			cout<<"\nthe sport score is ::"<<score;
		}
	
};


class result:public test,public sport

{
  private:
       float t;
       
  public:
  	
  	void total()
  	{
  		t=part_1+part_2+score;
  		
  		cout<<"Score is ::"<<t;
  		
  		
	  }
	
	
};



main()
{
	
	result e1;
	e1.get();
	e1.put();
	e1.getdata();
	e1.putdata();
	e1.accept();
	e1.total();
	
	
	
	
}
