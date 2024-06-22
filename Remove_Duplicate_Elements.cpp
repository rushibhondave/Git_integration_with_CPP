//Remove duplicate elements
#include<iostream>
using namespace std;
int main()
{
	int size,a[20],i,j,k;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<size;i++)
	
		cin>>a[i];
	for(i=0;i<size;i++)
	{
			
		for(j=i+1;j<size;)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				size--;
			}
			else 
			{
				j++;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
