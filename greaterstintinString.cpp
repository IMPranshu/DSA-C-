#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s="7879827223";
	
	sort(s.begin(),s.end(), greater<int>());
	cout<<s;
	
	return 0;
}
