#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter size:";
	cin>>n;
	int a[n];
	for(int i  =0;i<n;i++){
		cin>>a[i];
	}
	int cur[n];
	cur[0]=0;
	for(int i =1;i<n;i++){
		cur[i]=cur[i-1]+a[i-1];
	}
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		mx=max(mx,cur[i]);
	}
	cout<<mx;

	return 0;
}
