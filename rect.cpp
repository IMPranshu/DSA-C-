#include<iostream>
using namespace std;

int main()
{
	int rows, columns;
	cout<<"\nRows:";
	cin>>rows;
	cout<<"\nColumns:";
	cin>>columns;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
