#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n){
	return (n && !(n & n-1));
}
int main()
{
	if(isPowerof2(0))
	cout<<"\nPower of 2";
	else
	cout<<"\nNot power of 2";

	
	return 0;
}
