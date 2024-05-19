
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;


class bank {
	
	private:
		char i;
		
	public :
		
	 void get()
	 
	 {
	 	cout<<"Enter the key";
	 	cin>>i;
	 	
	 	
	 }
	
	
	void put()
	{
		cout<<i;
	}
	
	
	
};

main()
{
	
	bank b1;
	b1.get();
	b1.put();
}