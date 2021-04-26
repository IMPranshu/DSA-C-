#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		int space=0;
		for(int j=1;j<=2*n;j++){
			if(j<=i){
				cout<<"* ";
			}
			else if(space==((2*n)-(2*i))){
				cout<<"* ";
			}
			else{
				cout<<"  ";
				space++;
			}
		}
		
		cout<<endl;
	}
		for(int i=n;i>0;i--){
		int space=0;
		for(int j=1;j<=2*n;j++){
			if(j<=i){
				cout<<"* ";
			}
			else if(space==((2*n)-(2*i))){
				cout<<"* ";
			}
			else{
				cout<<"  ";
				space++;
			}
		}
		
		cout<<endl;
	}

	return 0;
}
