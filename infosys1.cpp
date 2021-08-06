#include <bits/stdc++.h>
#include <string>
using namespace std;

int P[100], B[1000];

int main()
{
    int n, e, defeat = 0;
    cout << "Enter No. of monsters and Experience";
    cin >> n >> e;
    int P[n], B[n];
    cout << "\nEnter all Power";
    for (int i = 0; i < n; i++)
        cin >> P[i];
    cout << "\nEnter all Bonus";
    for (int i = 0; i < n; i++)
        cin >> B[i];

    int PointB[1000];
    for (int i = 0; i < n; i++)
    {
        PointB[P[i]] = B[i];
    }

    sort(P, P + n);

    for (int i = 0; i < n; i++)
    {
        if (P[i] <= e)
        {
            defeat++;
            e += PointB[P[i]];
        }
        else
            i = n;
    }

    cout << "\nMonsters defeated:" << defeat;
}
