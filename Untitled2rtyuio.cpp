//#include <iostream>  
//using namespace std;
//
//class statistical 
//{
//     private:
//	 	
//           int i,me=0,sum=0,m[50],n=10;
//		
//     public:
//     	
//      	   void sumA();
//	       inline int mean(); 
//		   	
//};
//
//
//void statistical::sumA()
//{	
//	cout<<"Enetr the 10 intger number ::\n";
//	for(i=0;i<10;i++)
//	{	
//	   cin>>m[i];	
//	}
//	for(i=0;i<10;i++)
//	{	                                  //mean of 10 number
//	   cout<<m[i]<<"\t";	
//	}
//	cout<<"\n";
//	for(i=0;i<10;i++)
//    {
// 	 		sum=sum+m[i];		                         
//    }
// 	 	cout<<"\n";
//		cout<<"\nsum::"<<sum;	
//}
//
//
// inline int statistical::mean()
//{
//        cout<<"\n mean= "<<(sum/n);        
//}
//
//
//main()
//{
//	  statistical s1;
//		s1.sumA();
//		s1.mean();
//			
//}





//#include <iostream>  
//using namespace std;
//
//int main()
//{    
//    int ch,a,b,c,leave;
//    
//    do{
//	
//    cout<<"\n\nEnter the choice\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulas\n6.Exist\n";	
//	cin>>ch;
//	
//	switch(ch)
//	{
//		
//		case 1:
//			 cout<<"Enter the a & b ::\n";
//			 cin>>a>>b;
//			 
//			 c=a+b;
//			 
//			 cout<<"\nAddtion is ::"<<c;
//			
//			break;                                                          //Arithmatic eqution9

//			
//			
//		case 2:
//			  
//			 cout<<"\nEnter the a & b::\n";
//			 cin>>a>>b;
//			 
//			 c=a-b;
//			 
//			 cout<<"\n Ans is ::"<<c;
//			
//			break;
//			
//			
//		case 3:
//			
//			 cout<<"\nEnter the a & b::\n";
//			 cin>>a>>b;
//			 
//			 c=a*b;
//			 
//			 cout<<"\nAns is ::"<<c;
//			
//			break;
//			
//			
//			
//		case 4:
//			
//			 cout<<"Enter the a & b::\n";
//			 cin>>a>>b;
//			 
//			 c=a/b;
//			 
//			 cout<<"\nAns is ::"<<c;
//			
//			break;
//		
//		
//		case 5:
//			 cout<<"Enter the a & b:::\n";
//			 cin>>a>>b;
//			 
//			 c=a%b;
//			 
//			 cout<<"\n Ans is ::"<<c;
//			
//			break;
//		
//		
//		case 6:
//			
//			leave;
//			
//			break;
//	   
//	    default:
//		cout<<"\n\ninvalid selction you enter";	
//	 
//		
//	}
//	
//    
//	
//	} while(ch!=6);
//
//
//}

//
//
//#include <iostream>  
//using namespace std;
//
//class factorial
//{   
//    private:
//    	
//	 int i,n,fact=1;
//	 
//	 public:
//
//	void display()
//	
//		{
//		 
//		 cout<<"Enter the number::";
//		 cin>>n;
//		 
//		 
//		 for(i=1;i<=n;i++)
//		 {
//		 	
//		 	fact=fact*i;
//		 	
//		 }
//		 
//		cout<<"\nThe factoral ans is ::"<<fact;
//		
//	
//     	}
//	
//};
//
//int main()
//{
//	factorial f1;
//    f1.display();
//	
//	
//	
//}


//
//#include <iostream>  
//using namespace std;
//
//class student
//{
//	private:
//		
//		string name;
//		string address; 
//		   int roll_no;
//		   float percentage; 
//	
//	public:
//			void get();
//			void display();
//			
//	
//	
//	
//};
//                                                       //student info
//
//void student:: get() 
//{
//	    cout<<"Enter the student name ::";
//	cin>>name;
//	
//	
//		cout<<"Enter the student adderss ::";
//	cin>>address;
//	
//		cout<<"Enter the student roll no::";
//	cin>>roll_no;
//	
//		cout<<"Enter the student percentage::";
//	cin>>percentage;
//	
//	
//}
//
//
//void student::display()
//{
//	
//	cout<<"\nStudent name::"<<name;
//	cout<<"\nStudent address::"<<address;
//	cout<<"\nStudent address::"<<roll_no;
//	cout<<"\nStudent address::"<<percentage;
//	
//	
//	
//	
//}
//
//
//main()
//{
//	
//	student s1;
//	s1.get();
//	s1.display();
//	
//	
//}




//
//#include <iostream>  
//using namespace std;
//
//class cricket
//{
//	private:
//		int i,n,m[10];
//		string name;
//		string role;
//		string style;
//		int  dob_born;
//		int  icc_ranking;
//		int  total_score;
//		
//		public:
//			void get();
//			void put();
//			                                  //10 cricket innfo using array & not 
//	
//};
//
//void cricket::get()
//{
//   	 cout<<"Enter the name::";
//   	 cin>>name;
//   	 
//   	 cout<<"\nEnter the role::";
//   	 cin>>role;
//   	 
//   	 cout<<"\nEnter the style:";
//   	 cin>>style;
//   	 
//   	 cout<<"\nEnter the dob brith:::";
//   	 cin>>dob_born;
//   	 
//   	 cout<<"\nEnetre the icc ranking::";
//   	 cin>>icc_ranking;
//   	 
//   	 cout<<"\nEnter the total score::";
//   	 cin>>total_score;
//   	
//	
//}
//
//
//void cricket::put()
//{
//	
//   	cout<<"\nnEnter the name::"<<name;
//	 cout<<"\nEnter the role::"<<role;
//	 cout<<"\nEnter the style::"<<style;
//	 cout<<"\nEnter the dob brith:::"<<dob_born;
//	 cout<<"\nEnetre the icc ranking::"<<icc_ranking;
//   	 cout<<"\nEnter the total score::"<<total_score;
//
//
//	 
//	
//
//	
//	
//}
//
//
//
//main()
//{
//	int n,i,m[10];
//	
//    cricket c1[10];	
//	
//	
//	cout<<"\nEnter the number ofcricketer::";
//	cin>>n;
//	
//	for(i=0;i<n;i++)
//	{
//		m[i].get();
//	}
//	
//	      
//		
//	
//
//
//    	
//	for(i=0;i<n;i++)
//	{
//	   m[i].put();
//		
//	}
//	     
//		
//	
//	
//	
//}


//#include <iostream>  
//using namespace std;
//
//void num()
//{   
//    int i,m[3],n,temp;
//    
//cout<<"Enter the forward number::\n";
//    
//    for(i=0;i<3;i++)
//    {
//    	
//    	cin>>m[i];                                  //revserse number  #& not run
//	}   
//	  
//cout<<"\nforward the number::\n";
//    
//    for(i=0;i<3;i++)
//    {
//    	
//    	cout<<m[i]<<"\n";
//	}
//	
//	
//cout<<"\nenter the revese the number::\n";
//    
//    for(i=0;i<3;i++)
//    {
//    	
//    	cin>>m[i];
//	}
//	  
//    
//    for(i=0;i<3/2;i++)
//    {
//      temp = m[i];
//        m[i] = m[2-i-1];
//        m[2-i-1] = temp;
//        
//    
//	}
//	
//	cout<<"\nThe revese the number::\n";
//	
//	 for(i=0;i<3/2;i++)
//    {
//	  	  	cout<<m[i]<<"\n";
//	  
//    }
//}
//
//
//
//main()
//{
//    num();
//	 
//	
//}



#include <iostream>  
using namespace std;

class batsman
{
	   
	   private:
	   	     string name;
	   	     string style;
             int bcode;
	   	     int innings;
	   	     int notout;
	   	     int runs;
	   	    int  batavg;
	   	     int total_score;
	   	     
	 public:
	   void  writedata();
	   void  calcavg();
	   void  display();
	   	   
	 	
	 	
	   	      
};

void batsman::writedata()
{    

     cout<<"Enter the name::";
   	 cin>>name;
   	 
   	 cout<<"\nEnter the batsman code::";
   	 cin>>bcode;
   	 
   	 cout<<"\nEnetre the innings::";
   	 cin>>innings;
   	 
   	 cout<<"\nEnter the  notout::";
   	 cin>>notout;
   	 
   	 cout<<"\nEnter the  in odi total runs::";
   	 cin>>runs;
   	
   	 
   	cout<<"\n\n\n*********************************************************\n\n\n";
   
}




void batsman::display()
{
	
	 cout<<"the name::"<<name;
   	 
   	  
   	 cout<<"\nthe batsman code::"<<bcode;
   	
   	 
   	 cout<<"\nthe innings::"<<innings;
   	 
   	 
   	 cout<<"\nthe  notout::"<<notout;
   	 
   	 
   	 cout<<"\nthe ODI total runs::"<<runs;
   	 

	cout<<"\n\n\n*********************************************************\n\n\n";
   	 
	
}


void batsman::calcavg()
{
	// total_score=4051, innings=90,notout=10;
	 
	
	batavg=total_score/(innings-notout);
	
	cout<<"\n\nTotal Avgerage of batsman batting:: "<<batavg;
	
	cout<<"\n\n\n*********************************************************\n\n\n";

	
	
	
	
}

main()
{ 
  
   batsman b1;
   b1.writedata();
   b1.calcavg();
   b1.display();
   
	
	
}



