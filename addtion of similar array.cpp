#include<iostream>
using namespace std; 

int main(){

int i,sum=0;;	
int m[5]={10,15,17,15,19};


cout<<"The array is:"<<endl;
for(i=0;i<5;i++)
{
	cout<<m[i]<<"\t";
	
	
}


for(i=0;i<5;i++)
{
	
sum+=m[i];	

}


cout<<"Ans is:"<<sum;




}