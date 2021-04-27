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
	cout<<"\nEnter Rows for Pascal triangle:";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
