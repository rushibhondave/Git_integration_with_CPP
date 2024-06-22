#include<iostream>
using namespace std;
int main()
{
	int pass=0,size,a;
	//int arr[5]={20,30,100,1,0};
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<size;i++)
		cin>>arr[i];
	for(int a=0;a<size;a++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Passes done are: "<<a<<endl;
	cout<<"Sorted array is: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}


