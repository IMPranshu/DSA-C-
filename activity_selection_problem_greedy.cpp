#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

const int N = 1e3 + 5;

int main()
{

    int n;
    cin >> n;
    int S[n], E[n];
    for (int i = 0; i < n; i++)
    {
        cin >> S[i] >> E[i];
    }

    int P[N];
    for (int i = 0; i < n; i++)
    {
        P[E[i]] = S[i];
    }
    sort(E, E + n);
    int take = 1;
    int end = E[0];

    for (int i = 0; i < n; i++)
    {
        if (P[E[i]] >= end)
        {
            take++;
            end = P[E[i + 1]];
        }
    }
    cout << take;

    return 0;
}