#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main()
{

    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int x, ans = 0;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }

    cout << ans;

    return 0;
}