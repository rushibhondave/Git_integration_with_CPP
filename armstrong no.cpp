#include<iostream>
using namespace std;
int main(){

int a,x,sum=0,rem;

cout<<"enter the number:";
cin>>a;

x=a;

while(a>0)
{

 rem=a%10;                    
 sum=sum+rem*rem*rem;	
  a=a/10;
  
 	
}
if(sum==x)
{
	
cout<<"The number is armstrong:"<<endl;	
	
}	

cout<<"The addtion of cubic number is:"<<sum;

}