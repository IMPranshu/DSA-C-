#include<iostream>
using namespace std;

int main()
{
	char button;
	cout<<"\nA-B-C-D-E";
	cin>>button;
	switch(button)
	{
		case 'a':
			cout<<"\nHello\n";
			break;
		case 'b':
			cout<<"\nNamaste\n";
			break;
		case 'c':
			cout<<"\nSalut\n";
			break;
		case 'd':
			cout<<"\nHola\n";
			break;
		case 'e':
			cout<<"\nCiao\n";
			break;
		default:
			cout<<"\nLearning!";
			break;
	}
	
	return 0;
}
