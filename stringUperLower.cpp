#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string s = "blibweuiui";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s;
	return 0;
}
