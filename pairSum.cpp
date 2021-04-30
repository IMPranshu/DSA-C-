#include<iostream>
#include<climits>
using namespace std;


int main()
{
	int n,k;
	cout<<"\nEnter size:";
	cin>>n;
	cout<<"\nEnter sum:";
	cin>>k;
	
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	//insertion sort
	for(int i =1;i<n;i++){
		int current = a[i];
		int j=i-1;
		while(a[j]>current && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = current;
	}
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	int mn=INT_MAX;
	for(int i =0;i<n;i++){
		mn=min(mn,a[i]);
		
	}
	int low=0,high = n-1,sum=0;
	for(int i =0;i<n;i++){
		sum=a[low]+a[high];
		if(sum<k){
			low++;
		}
		else if(sum>k){
			high--;
		}
		else{
			cout<<low<<" "<<high;
			return 0;
		}
	}
	
	
	
	return 0;
}
