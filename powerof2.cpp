#include<bits/stdc++.h>
using namespace std;


int setBit(int n , int pos){
	return (n | 1<<pos);
}
bool getBit(int n,int pos){
	return ((n & (1<<pos))!=0);
}
int unique(int arr[], int n){
		int result=0;
	for(int i=0;i<64;i++){
		int sum =0;
		for(int j=0;j<n;j++){
			int a =getBit(arr[j],i);
			if(a){
				sum++;
			}
		}
		if(sum % 3 != 0){
			result = setBit(result , i);
		}
	}
	return result;
}
int main()
{
	int a[]={1,3,2,3,4,2,1,1,3,2};
	cout<<unique(a,10);

	
	return 0;
}
