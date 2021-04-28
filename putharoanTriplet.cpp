#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z){
	int a = max(x, max(y,z));
	
	int b,c;
	if(a==x){
		b=y;
		c=z;
	}
	else if(b==x){
		b=x;c=z;
	}
	else{
		b=x;c=y;
	}
	
	if(a*a == b*b + c*c)
	return true;
	else
	return false;
}


int main()
{
	int x,y,z;
	cout<<"\nEnter the numbers:";
	cin>>x>>y>>z;
	
	if(check(x,y,z)){
		cout<<"\nPythagorian Triplet";
	}
	else{
		cout<<"\nNot Pythagorian Triplet";

	}
	
	return 0;
}
