#include <bits/stdc++.h>
#include <string>
using namespace std;

#define vi vector<int>

const int N = 1e5 + 2, MOD = 1e9 + 7;
int dp[N];

int main()
{

    int coins, value;
    cout << "\nEnter no. of coins & Value:";
    cin >> coins >> value;
    cout << "\nEnter the Coins:";
    int A[coins];
    for (int i = 0; i < coins; i++)
    {
        cin >> A[i];
    }
    int B[coins][value];
    for (int i = 0; i <= coins; i++)
    {
        for (int j = 0; j <= value; j++)
        {
            B[i][j] = 0;
        }
    }

    B[0][0] = 1;
    for (int i = 1; i <= coins; i++)
    {
        for (int j = 0; j <= value; j++)
        {
            if ((j - i) > 0)
                B[i][j] = B[i - 1][j - i] + B[j - i][i - 1];
            else
                B[i][j] = B[i - 1][j];
        }
    }
    for (int i = 0; i <= coins; i++)
    {
        for (int j = 0; j <= value; j++)
        {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
