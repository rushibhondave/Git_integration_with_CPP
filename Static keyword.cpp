#include<iostream>
using namespace std;

class A
{

int n=10;
static int a;
public:
	
int r()
{ 
	 cout<<n<<a;
}
	
static int fun()
{ 
	 cout<<a;   // non static data not acces in static function
}

};

int A::a=10;
int main()
{ 
  A a1;
  a1.r();
  A::fun();
	
}