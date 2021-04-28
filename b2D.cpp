#include<bits/stdc++.h>
#include <boost/lexical_cast>  
using namespace std;

int b2D(int n){
	int ans = 0;
	int x=1;
	while(n>0){
		int y = n%10;
		ans+= x*y;
		x *= 2;
		n /= 10;
	}
	return ans;
}

int o2D(int n){
	int ans = 0;
	int x=1;
	while(n>0){
		int y = n%10;
		ans+= x*y;
		x *= 8;
		n /= 10;
	}
	return ans;
}

int h2D(string n){
	int ans = 0;
	int x=1;
	int s = n.size();
	
	for(int i=s-1; i>=0;i--){
		if(n[i]>='0'  && n[i] <='9'){
			ans += x * (n[i]-'0');
		}
		else if(n[i]>='A' && n[i]<= 'F')
		{
			ans += x*(n[i]-'A'+10);
		}
		x*=16;
	}
	return ans;
}
int d2B(int n){
	int x =1;
	int ans =0;
	while(x<=n){
		x*=2;
	}
	x/=2;
	
	while(x>0){
		int lastDigit = n/x;
		n-=lastDigit*x;
		x/=2;
		ans = ans*10 +lastDigit;
	}
	return ans;
}
int d2O(int n){
	int x =1;
	int ans =0;
	while(x<=n){
		x*=8;
	}
	x/=8;
	
	while(x>0){
		int lastDigit = n/x;
		n-=lastDigit*x;
		x/=8;
		ans = ans*10 +lastDigit;
	}
	return ans;
}

//string d2H(int n){
//	int x=1;
//	string ans = "";
//	while(x<=n)
//	x=x*16;
//	x/=16;
//	while(x>0){
//		int lastDigit = n/x;
//		 n-= 16;
//		 
//		 if(lastDigit <= 9)
//		 
//		 ans = ans + boost::lexical_cast<string>(lastDigit) ;
//		 
//		 else {
//		 	char c = 'A' + lastDigit -10;
//		 	ans.push_back(c);
//		 }
//	}
//	return ans;
//}

int main()
{
//	string n;
	int n;
	cout<<"\nEnter a number:";
	cin>>n;
//	cout<<"\nThe Binary to Decimal is:"<<b2D(n);
//	cout<<"\nThe Octal to Decimal is:"<<o2D(n);
//	cout<<"\nThe Hexa to Decimal is:"<<h2D(n);
//	cout<<"\nThe Decimal to Binary is:"<<d2B(n);
	cout<<"\nThe Decimal to Octal is:"<<d2O(n);
//	cout<<"\nThe Decimal to Hexa is:"<<d2H(n);

	return 0;
}
