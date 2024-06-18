#include <iostream>  
using namespace std;  
class ABC  
{  
public:  
int A;    
 public:  
  void fun()
 {
 	cout<<"Non-Const fun";
 }
 const void fun1()
 {
 	cout<<"Const fun";
 }
};  
int main ()  
{  
 ABC obj; 
 
cout <<  obj.fun1() << endl;  

return 0;  
} 