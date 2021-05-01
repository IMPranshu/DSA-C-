#include<bits/stdc++.h>
using namespace std;


int unique(int arr[], int n){
	int xorsum = 0;
	for(int i =0;i<n;i++){
		xorsum = xorsum^arr[i];//XOR bitwise operator

	}
	return xorsum;
}
int main()
{
	int arr[]={1,3,2,3,4,1,2};
	cout<<unique(arr,7);
	return 0;
}
