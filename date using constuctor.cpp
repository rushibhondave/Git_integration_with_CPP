#include <iostream>  
using namespace std;


class date
 
	{   
	private:
		
	    int dd,mm,yy;
	     
	public:

	      
		date();
		    date(int d,int m,int y);
		      void  display();	
				
	};	
	    date ::date()    
    {
            dd=19;
        	    mm=04;
        	      yy=01;
		}
        
        date ::date(int d,int m,int y)  
	{
	 	
	 	dd=d;
		 	mm=m;
	 	     yy=y;
	 	
	    } 
          
      void date:: display()
	{
	 	
	 	cout<<"Date:-"<<dd<<"/"<<mm<<"/"<<yy;
		}   
        
      

             
            main()
	{ 
	    date d1;	     
          d1.display();
       date d2(3,12,2012);
        d2.display();
	
   	
	   }    
        
      
      
//      
//#include <iostream>  
//using namespace std;
//
//
//class date
// 
//	{   
//	private:
//		
//	    int dd,mm,yy;
//	     
//	public:
//
//	  
//		 
//	    date()    
//    {
//        dd=19;
//        	 mm=04;
//        	    yy=2001;
//		}
//        
//        
//        date(int d,int m,int y)  
//	{
//	 	
//	 	dd=d;
//		 	mm=m;
//	 	        yy=y;
//	 	
//	 	
//	    } 
//        
//        
//    void display()
//	{
//	 	
//	 	cout<<"Date:-"<<dd<<"/"<<mm<<"/"<<yy;
//	 	cout<<"\n";
//	 	
//		}   
//        
//        };
//
//            
//			 
//     int main()
//	{ 
//	    date d1;
//	         d1.display();
//	         
//		date d2(20,5,2002);
//			 d2.display(); 
//   	
//	   }    
//        



      
      
      
      
//      
//      
//   
//#include<iostream>
//using namespace std;
//
//class date
//{
//    private:
//        int dd, mm, yy;
//
//    public:
//        date()
//        {
//            dd=1;
//            mm=1;
//            yy=1999;
//         
//        }
//
//        void display()
//        {
//            cout<<"\nThe Date is :: ";
//            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
//        }
//};
//int main ()
//{
//date date1;
//date1.display ();
//
//
//}   

      
      
      
      
      
      
      
      
      
      
      
      