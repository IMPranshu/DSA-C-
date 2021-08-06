#include <bits/stdc++.h>
#include <string>
using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 7;
int dp[N];

int MinSquare(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 0)
        return n;

    int ans = MOD;
    for (int i = 0; i * i <= n; i++)
    {
        ans = min(ans, 1 + MinSquare(n - i * i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << MinSquare(n) << endl;
}
