#include<iostream>
using namespace std;

int main(){
  int n;
  
  int x=1;
  int size;
  cout<<"enter size"<<endl;
  cin>>size;
  cout<<"enter number"<<endl;
  cin>>n;//123
  int arr1[size];
  int i=size-1;
  do{
    arr1[i]=n%10;
n=n/10;
i--;
}while(n>0);
  
  
  size=sizeof(arr1)/sizeof(arr1[0]);
 
  for(int i=size-1;i>=0;i--){
     
    arr1[i]=arr1[i]*x;
   x=x*10;
}
for(int i=0;i<size;i++)
{
  cout<<arr1[i];
  
if (i==size-1){
   break;
}
else{
  cout<<"+";
}

}
}