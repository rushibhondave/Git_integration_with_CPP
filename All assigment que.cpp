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
//		                                           //The factoral number using clSAS
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
//   cout<<"\nnEnter the name::"<<name;
//	 cout<<"\nEnter the role::"<<role;
//	 cout<<"\nEnter the style::"<<style;
//	 cout<<"\nEnter the dob brith:::"<<dob_born;
//	 cout<<"\nEnetre the icc ranking::"<<icc_ranking;
//   cout<<"\nEnter the total score::"<<total_score;
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




//
//#include <iostream>  
//using namespace std;
//
//class batsman
//{
//	   
//	   private:
//	   	     string name;
//	   	     string style;
//             int bcode;
//	   	     int innings;
//	   	     int notout;
//	   	     int runs;
//	   	    int  batavg;
//	   	     int total_score;
//	   	     
//	 public:
//	   void  writedata();
//	   void  calcavg();
//	   void  display();
//	   	   
//	 	
//	 	
//	   	      
//};
//
//void batsman::writedata()
//{    
//
//     cout<<"Enter the name::";
//   	 cin>>name;
//   	 
//   	 cout<<"\nEnter the batsman code::";
//   	 cin>>bcode;
//   	 
//   	 cout<<"\nEnetre the innings::";
//   	 cin>>innings;
//   	 
//   	 cout<<"\nEnter the  notout::";
//   	 cin>>notout;
//   	 
//   	 cout<<"\nEnter the  in odi total runs::";
//   	 cin>>runs;
//   	
//   	 
//   	cout<<"\n\n\n*********************************************************\n\n\n";
//   
//}
//
//
//
//
//void batsman::display()
//{
//	
//	 cout<<"the name::"<<name;
//   	 
//   	  
//   	 cout<<"\nthe batsman code::"<<bcode;
//   	
//   	 
//   	 cout<<"\nthe innings::"<<innings;
//   	 
//   	 
//   	 cout<<"\nthe  notout::"<<notout;
//   	 
//   	 
//   	 cout<<"\nthe ODI total runs::"<<runs;
//   	 
//
//	cout<<"\n\n\n*********************************************************\n\n\n";
//   	 
//	
//}
//
//
//void batsman::calcavg()
//{
//	// total_score=4051, innings=90,notout=10;
//	 
//	
//	batavg=total_score/(innings-notout);
//	
//	cout<<"\n\nTotal Avgerage of batsman batting:: "<<batavg;
//	
//	cout<<"\n\n\n*********************************************************\n\n\n";
//
//	
//	
//	
//	
//}
//
//main()
//{ 
//  
//   batsman b1;
//   b1.writedata();
//   b1.calcavg();
//   b1.display();
//   
//	
//	
//}



//
// 
//#include <iostream>  
//using namespace std;
//
//class cube
//{
//	private:
//		int v,cub;
//		
//	
//	public:
//		
//		cube()
//		{
//			cout<<"Enter the colume";
//			cin>>v;
//		}
//		
//		cube(int i)
//		{
//			v=i;                             // volume of cube with para
//		}
//		
//		
//		
//	 int volume()
//		{
//		   	return v*v*v;
//		   	
//      
//		
//		}
//
//};
//
//
//
//main()
//{
//      cube c1;
//      cube c2(5);
//      cube c3(c2);
//      
//     cout<<"\n\nVolume of cube::"<<c1.volume();
//      cout<<"\n\nVolume of cube::"<<c2.volume();
//       cout<<"\n\nVolume of cube::"<<c3.volume();
//	  	
//
//}


//
//#include <iostream>  
//using namespace std;
//
//class factoril
//{
//  
//  private:
//  	  int n,fact=1,i,a,c;
//  	  
//  	  public:
//  	  	 
////  	  	factoril()
////  	  	{
////  	  		cout<<"Enter the factoral number::";
////  	  		cin>>n;
////  	  	
////  	  	}
//  	  	
//  	   factoril(int x)
//  	    {                                                    // factorail number & not
//  	    	n=x;
//  	  	
//  	  	
//		}
//  	  	
//  	  	
//  	  	int factorall()
//  	  	{
//  	  		for(i=1;i<=n;i++)
//  	  		{
//  	  			return fact*i;
//  	  			
//			}
//  	  		
//		}
//	
//};
//
//      
//main()
//{
//	
////	 factoril f1;
//	  factoril f2(5);
//	   factoril f3(f2);
//	  
//	 // cout<<"\nFactoroal number is ::"<<f1.factorall();
//	  cout<<"\nFactoroal number is ::"<<f2.factorall();
//	  cout<<"\nFactoroal number is ::"<<f3.factorall();
//	  
//	
//	
//}


//#include<iostream>
//using namespace std;
//
//class Fibonacci
//{ 
//   
//   private:
//   	      int a=0,b=1,n,sum=0
//   	
//   	public:
//   		
//   		
//   	static void fib(int a);          //fibonicci recussion series
//	   
//	
//	
//};
//
//
//
//
//	
//  
//
//
//
//main()
//{
//	 int a=0,b=1,n,sum=0
//	 
//	 cout<<"0"<<"1";
//	 
//	 
//	  Fibonacci::
//	
//	
//	
//}


//
//#include <iostream> 
//using namespace std;
//
//class  Spark
//{  
//   protected:	
//        string b_name;
//		 string teacher_name;
//		 
//    public:
//    	
//    	void get()
//    	{
//    		 cout<<"\nEnter the brand_name::";
//    		 cin>>b_name;
//    		 
//    		 cout<<"\nEnter the teacher name::";
//    		 cin>>teacher_name;
//    		 
//    		
//		}
//		 
//	 
//	  
//};
//
//
//class courses:public Spark
//{
//	
//	 private:	
//        string c_name;
//		 string cteacher_name;
//		 
//    public:
//    	
//    	void getdata()
//    	{
//    		 cout<<"\nEnter the course_name::";
//    		 cin>>c_name;
//    		 
//    		 cout<<"\nEnter the C_teacher name::";
//    		 cin>>cteacher_name;
//    		 
//    		
//		}
//	
//	
//	void display()
//	{ 
//	    cout<<"\nthe brand_name::"<<b_name;    
//	    cout<<"\nthe course_name::"<<c_name;
//	    cout<<"\nthe C_teacher name::"<<cteacher_name;
//	    
//		
//		
//	}
//	
//	
//};
//
//main()
//{
//   courses c1;
//   c1.get();
//   c1.getdata();
//   c1.display();
//  
//	
//}

//
//#include <iostream>
//using namespace std;
//class fibonacci
//{
//    private:
//    	static int n,c;
//    
//    public:
//    	 
//        void fun()
//        {
//	    	int i,j,a=0,b=1,c=0,n;
//	    
//	    cout<<"enter the num: ";
//	    cin>>n;
//	    while (n>0)
//	    {
//	        c=a+b;
//	        a=b;
//	        b=c;
//        }    
//    	 	
//	    }
//    	 
//    	
//	    static void fibo()
//		{
//			cout<<"0"<<"1"<<endl;
//			cout<<c;
//			
//			
//		}
//};
//
//
//int static::c++;
//
//
//
//main ()
//{
//    fibonacci::fibo();
//}
//




