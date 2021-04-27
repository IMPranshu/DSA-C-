#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter a number:";
	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//	for(int j=1;j<=n-i;j++)
//	{
//	cout<<"  ";
//	}	
//	for(int j=1;j<=(2*i);j++){
//		if(j%2!=0)
//		cout<<"* ";
//		else
//		continue;
//	}
//		for(int j=2;j<=(2*i);j++){
//		if(j%2!=0)
//		cout<<"* ";
//		else
//		continue;
//	}	
//	cout<<endl;
//}	for(int i=n;i>0;i--)
//	{
//	for(int j=1;j<=n-i;j++)
//	{
//	cout<<"  ";
//	}	
//	for(int j=1;j<=(2*i);j++){
//		if(j%2!=0)
//		cout<<"* ";
//		else
//		continue;
//	}
//		for(int j=2;j<=(2*i);j++){
//		if(j%2!=0)
//		cout<<"* ";
//		else
//		continue;
//	}	
//	cout<<endl;
//}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j =1;j<=(2*i-1);j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j =1;j<=(2*i-1);j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
