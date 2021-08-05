#include <bits/stdc++.h>
#include <string>
using namespace std;

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
    for (int i = 0; i < n; i++)
    {
        if (P[i] <= e)
        {
            defeat++;
            e += B[n];
        }
        else
            i = n;
    }
    cout << "\nMonsters defeated:" << defeat;
}
