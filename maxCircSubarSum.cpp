#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n){
		int cur=0;
	int mx=INT_MIN;
	for(int i =0;i<n;i++){
		cur+=a[i];
		if(cur<0){
			cur=0;
		}
		mx=max(mx,cur);
	}
	return mx;
	
}
int main()
{
	int n;
	cout<<"\nEnter size:";
	cin>>n;
	int a[n];
	for(int i  =0;i<n;i++){
		cin>>a[i];
	}
	int nonwrapsum=kadane(a,n);
	int sum=0;
	for(int i =0;i<n;i++){
		sum+=a[i];
		a[i]*=-1;
}
int wrapsum=kadane(a,n);

int res=sum-(wrapsum*(-1));
cout<<max(res,nonwrapsum);

	return 0;
}
