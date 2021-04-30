#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter size:";
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int curSum[n+1];
	curSum[0]=0;
	for(int i =1;i<=n;i++){
		curSum[i]= curSum[i-1]+a[i-1];
	}
	
	int mx= INT_MIN;
	for(int i=1;i<=n;i++){
		int sum =0;
		for(int j=0;j<i;j++){
			sum = curSum[i]-curSum[j];
			mx=max(sum, mx);
		}
	}
	cout<< mx;
	return 0;
}
