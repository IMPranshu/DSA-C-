//2D arrays

#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cout<<"\nEnter rows:";
	cin>>n;
    cout<<"\nEnter columns:";
	cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	//Spiral order print of matrix
	int r_s=0,r_e=n-1,c_s=0,c_e=m-1;
	cout<<"\nSpiral Order\n";
	while(r_s<=r_e && c_s<=c_e){
		//starting row
		for(int col = c_s;col<=c_e;col++){
			cout<<a[r_s][col]<<" ";
		}
		r_s++;
		
		//ending col
		for(int row = r_s;row<=r_e;row++){
			cout<<a[row][c_e]<<" ";
		}
		c_e--;
		
		//ending row
		for(int col=c_e;col>=c_s;col--){
			cout<<a[r_e][col]<<" ";
		}
		r_e--;
		
		//starting col
		for(int row=r_e;row>=r_s;row--){
			cout<<a[row][c_s]<<" ";
		}
		c_s++;
	}
	return 0;
}
