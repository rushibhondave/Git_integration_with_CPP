template <class T,class A>
class BubbleSort
{

public:
A bubble(T &n,A a[] )
{
	A temp[n];

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
			
				temp[i]=a[i];
				a[i]=a[j];
				a[j]=temp[i];
			}	
		}
	}
	

	cout<<" Print the Arry : : ";
	 for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

};
int main()
{
	int n;	
	cout<<"Enter size:";
	cin>>n;
//    int  a[n];
	char a[n];
	BubbleSort <int,char> b1;
	cout<<"Enter the Arry :: ";
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	b1.bubble(n,a);

}