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
	int n;
	cout<<"\nEnter the number:";
	cin>>n;
	int f=fact(n);
	cout<<"\nThe facotrial is:"<<f;
	
	return 0;
}
