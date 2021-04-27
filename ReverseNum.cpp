#include<iostream>
using namespace std;

int main()
{
	int n,rev;
	cout<<"\nEnter a number:";
	cin>>n;
	while(n>0){
		int lastDig = n%10;
		rev*=10;
		rev+=lastDig;
		n=n/10;
	}
	cout<<"\nReverse:"<<rev;
	return 0;
}
