#include<iostream>
using namespace std;

int main()
{
	char a;
	do
	{
	int n, i;
	cout<<"\nEnter the Number:";
	cin>>n;
	for(i = 2; i<n; i++){
		if(n%i==0){
			cout<<"\nNot Prime!";
			break;
		}
	}
	if(i==n){
		cout<<n<<":Prime.";
	}
	cout<<"\nDo you want to check more?(Y/N)";
	cin>>a;
}while(a=='y'||a=='Y');
cout<<"\nExit";

	
	return 0;
}
