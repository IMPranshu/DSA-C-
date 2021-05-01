#include<bits/stdc++.h>
using namespace std;

int noOfones(int n){
	int count = 0;
	while(n){
		n = n & (n-1);
		count++;
	}
	return count;
}
int main()
{
	cout<<"\nNumber of 1's:"<<noOfones(19);
	
	return 0;
}
