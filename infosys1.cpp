#include <bits/stdc++.h>
#include <string>
using namespace std;

int P[100], B[100];
void Merge(int A[], int C[], int low, int high, int mid);
void MergeSort(int A[], int B[], int low, int high);

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
        B[P[i]] = B[i];
    }

    sort(P, P + n);

    for (int i = 0; i < n; i++)
    {
        if (P[i] <= e)
        {
            defeat++;
            e += B[P[i]];
        }
        else
            i = n;
    }

    cout << "\nMonsters defeated:" << defeat;
}
