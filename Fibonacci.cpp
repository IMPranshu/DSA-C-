#include<iostream>
using namespace std;


void fibo(int n){
	int a=0,b=1,c;
	cout<<"\nThe Fibo. Seq. is:\n"<<a<<" "<<b;
	for(int i=0;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<" "<<c;
		
	}
}
int main()
{
	int n;
	cout<<"\nEnter the Fibo Seq. limit:";
	cin>>n;
	fibo(n);
	
	
	return 0;
}
