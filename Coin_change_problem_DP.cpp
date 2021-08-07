#include <bits/stdc++.h>
#include <string>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>

const int N = 1e3 + 2, MOD = 1e9 + 7;

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

    vvi dp(n + 1, vi(x + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            if (j - a[i - 1] >= 0)
            {
                dp[i][j] += dp[i][j - a[i - 1]];
            }
            dp[i][j] += dp[i - 1][j];
        }
    }

    cout << dp[x];
    return 0;
}
