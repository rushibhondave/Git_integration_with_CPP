#include<iostream>
using namespace std;
int main(){

int a,sum=0,rem;

cout<<"enter the number=";
cin>>a;



while(a>0)
{
 rem=a%10;                    
 sum=sum+rem*rem*rem;	
  a=a/10;
 	
}	

cout<<"The addtion of cubic number is:"<<sum;		


	
}











