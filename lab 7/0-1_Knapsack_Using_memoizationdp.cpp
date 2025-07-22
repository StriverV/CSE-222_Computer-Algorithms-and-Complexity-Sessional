#include<bits/stdc++.h>
using namespace std;
vector<int>w(1005);
vector<int>v(1005);
int dp[1005][1005];

int Knapsack(int n, int c)
{
    if(n < 0 || c <= 0)   return 0;

    if(dp[n][c] != -1)    return dp[n][c];

    if(w[n] <= c)
    {
        int op1 = Knapsack(n-1, c-w[n]) + v[n];
        int op2 = Knapsack(n-1, c);

        return dp[n][c] = max(op1, op2);
    }
    else
    {
        return dp[n][c] = Knapsack(n-1, c);
    }

}

int main ()
{
    int n, c;
    cin >> n >> c;

    for(int i = 0; i < n; i++)
       cin >> v[i];

    for(int i = 0; i < n; i++)
       cin >> w[i];

    memset(dp, -1, sizeof(dp));

    cout << Knapsack(n-1, c) << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= c; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
