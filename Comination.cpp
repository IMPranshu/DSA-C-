#include<iostream>
using namespace std;


int fact(int n){
	int fac=1;
	for(int i=2;i<=n;i++){
		fac*=i;
	}
	return fac;
	
	}
int main()
{
	int n,r;
	cout<<"\nEnter (n,r):";
	cin>>n>>r;
	int a=fact(n);
	int b=fact(n-r);
	int c=fact(r);
	cout<<"\nThe nCr is:"<<a/(b*c); 
	
	return 0;
}
