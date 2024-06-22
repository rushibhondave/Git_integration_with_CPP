#include<iostream>
using namespace std;
template<class T>
T BubbleSort(T arr[],T size)
{
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
}
int main()
{
	int size;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter array elements: "<<endl;
	BubbleSort(arr,size);
	cout<<"Sorted array is: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}


