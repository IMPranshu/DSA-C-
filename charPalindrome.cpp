//Palindrome character
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the size:";
	cin>>n;
	char arr[n+1];
	cin>>arr;
	bool check = 1;
	
	for(int i=0;i<n;i++){
		if(arr[i] != arr[n-1-i]){
			check =0;
			break;
		}
	}
	if(check == 1)
	cout<<"\nPalindrome found!";
	else
	cout<<"\nNot a palindrome";
	return 0;
}
