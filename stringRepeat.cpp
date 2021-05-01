#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s="tyjytehsgsnhwf";
	int freq[26];
	for(int i=0;i<26;i++)
	freq[i]=0;
	
	for(int i =0;i<26;i++){
		freq[s[i]-'a']++;
	}
	char ans ='a';
	int mxF=0;
	for(int i =0;i<26;i++){
		if(freq[i]>mxF){
			mxF = freq[i];
			ans = i+'a';
		}
	}
	cout<<mxF<<" :"<<ans;

	
	return 0;
}
