#include<iostream>
using namespace std;
int main()
{
	int i,j,a[5]={6,2,5,1,3};

	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{	
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
		
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
//	return 0;
}
