#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=arr[0];
		cout<<"At 0 index:"<<mx<<endl;
	for(int i=1;i<n;i++){
		mx=max(mx,arr[i]);
		cout<<"At "<<i<<" index:"<<mx<<endl;
		
		
	}
	
	return 0;
}
