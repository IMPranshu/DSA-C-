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
	int cur=0;
	int mx= INT_MIN;
	for(int i =0;i<n;i++){
		cur+=a[i];
		if(cur<0){
			cur=0;
		}
		mx=max(mx,cur);
	}
	cout<<mx;
	return 0;
}
