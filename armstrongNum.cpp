#include<iostream>
using namespace std;

int main()
{
	int n,arm,sum=0;
	cout<<"\nEnter a number:";
	cin>>n;
	int num=n;
	while(n>0){
		arm=n%10;
		arm=arm*arm*arm;
		sum+=arm;
		n=n/10;
	}
	
	if(sum==num){
		cout<<"\nArmstrong Number.";
	}
	else{
		cout<<"\nNot Armstrong!";
	}
	
	return 0;
}
