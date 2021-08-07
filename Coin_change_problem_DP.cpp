#include <bits/stdc++.h>
#include <string>
using namespace std;

#define vi vector<int>

const int N = 1e5 + 2, MOD = 1e9 + 7;
int dp[N];

int CoinChange(vi &a, int n, int x)
{
    if (x == 0)
        return 1;
    if (x < 0)
        return 0;
    if (n <= 0)
        return 0;

    return CoinChange(a, n, x - a[n - 1]) + CoinChange(a, n - 1, x);
}
int main()
{

    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << CoinChange(a, n, x);

    return 0;
}
