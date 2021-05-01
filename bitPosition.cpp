#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int getBit(int n, int pos){
	
	return (n & (1<<pos)!=0);
}

int setBit(int n, int pos){
	return(n | (1<<pos));
}

int clearBit(int n, int pos){
	int mask = ~(1<<pos);
	return (n & mask);
}
int updateBit(int n, int pos,int val){
	//first clear bit at the pos\
	//setbit at that pos
	n=clearBit(n,pos);
	return(setBit(n,val));
}
int main()
{
	//cout<<getBit(10,2);
//	cout<<setBit(5,1);
//	cout<<clearBit(5,1);
	cout<<updateBit(5,1,1);	
	
	
	return 0;
}
