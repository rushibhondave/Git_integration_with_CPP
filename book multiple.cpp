#include <iostream>  
using namespace std;

class book
{
		protected:	
		    string authe r;
		    
		public:
			
		    void get()
		    {
		      cout<<"Enter the auther name::";
			  cin>>auther;	
			}

};	
	
	
	
class audio_cassette
{ 
     
	 protected:
	      int playing_time;	
		    string cassette;
		    
		public:	
	     
	      void accept()
	     {
	     	 cout<<"\nEnter the playing_time::";
	     	 cin>>playing_time;
	     	 
	     	 cout<<"\nEnter the cassette name ::";
	     	 cin>>cassette;
	     	 
		 }
	
};


class publication:public book,public audio_cassette
{
	
	 protected:	
	       int price;
		      string title;
		    
		public:
			
			void getdata()
			{
				cout<<"\nEnter the price::";
				cin>>price;
				
				cout<<"\nEnter the title::";
				cin>>title;
		
			}
			
			void putdata()
			{
				   cout<<"\nNamae of auther::"<<auther;
				   cout<<"\n";
				   cout<<"\name of book title::"<<title;
			       cout<<"\n";
			       cout<<"\ncassette name::"<<cassette;
			       cout<<"\n";
				   cout<<"\nplaying_time::"<<playing_time;
			       cout<<"\n";
			       cout<<"\nprice of book ::"<<price;
			       cout<<"\n";
		
			}
	
	
};


main()
{
	publication e1;
	e1.get();
	e1.accept();
	e1.getdata();
	e1.putdata();
	
	
	
}



