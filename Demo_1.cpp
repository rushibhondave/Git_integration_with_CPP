#include<iostream>
using namespace std;
class A {
        int num1,num2,temp;
    public :
        A() {
           cout<<"Enter the 1st Number ::";
           cin>>num1;
           cout<<"Enter the 2nd Number ::";
           cin>>num2;
           
//           temp=num1;
//           num1=num2;
//           num2=temp;
//           
//           cout<<"With 3rd varibale : :"<<num1<<" "<<num2<<endl;
           
           num1=num1+num2;
           num2=num1-num2;
           num1=num1-num2;
             cout<<"Without 3rd varibale : :"<<num1<<" "<<num2;
           
        }
};
int main() {
      A a;
}