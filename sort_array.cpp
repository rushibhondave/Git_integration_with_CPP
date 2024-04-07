#include<iostream>
#include<bits/stdc++.h>
using namespace std;

min_max() {
	int n=5,temp;
	int a[n];
	cout<<"Enter the Array : :";
	for(int i=0; i<n; i++) {
		cin>>a[i];

	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-1; j++) {

			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	
	}
	for(int i=0; i<n; i++) {
		cout<<a[i];
	}

}
int main() {
	min_max();
}