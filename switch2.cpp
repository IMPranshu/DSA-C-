#include<iostream>
using namespace std;

int main()
{
	float n1, n2,n;
	cout<<"\nInput 2 numbers";
	cin>>n1>>n2;
	char op;
	cout<<"\ninput /-*+";
	cin>>op;
	switch(op)
	{
		case '/':
			n=n1/n2;
			cout<<n;
			break;
		case '*':
			n=n1*n2;
			cout<<n;
			break;
		case '+':
			n=n1+n2;
			cout<<n;
			break;
		case '-':
			n=n1-n2;
			cout<<n;
			break;
		default:
			cout<<"\nLearning!";
			break;
	}
	
	return 0;
}
