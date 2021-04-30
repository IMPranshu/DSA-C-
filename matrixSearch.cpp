//Matrix multiplication


#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"\nEnter 2 numbers:";
	cin>>n1>>n2;
	int m1[n1][n2];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>m1[i][j];
		}
	}

		for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int k;
	cout<<"\nEnter the number to be searched:";
	cin>>k;
	bool res = false;
	int r=0,c=n2-1;
	while(r<n1 && c>=0){
		if(m1[r][c]==k)
		res = true;
		if(m1[r][c]>k){
			c--;
		}
		else{
			r++;
		}
		
	}
	if(res){
		cout<<"\nNumber found";
	}
	else{
		cout<<"\nNumber not found";

	}
	

	return 0;
}
