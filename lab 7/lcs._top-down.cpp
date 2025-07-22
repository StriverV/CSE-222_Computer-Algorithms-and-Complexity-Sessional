#include<bits/stdc++.h>
using namespace std;
string a,b;
int dp[1005][1005];

int lcs(int n, int m)
{
    if(n < 0 || m < 0)   return 0;

    if(dp[n][m] != -1)   return dp[n][m];

    if(a[n] == b[m])
    {
        return dp[n][m] = lcs(n-1, m-1) + 1;
    }
    else
    {
        int op1 = lcs(n-1, m);
        int op2 = lcs(n, m-1);
        
        return dp[n][m] = max(op1, op2);
    }
}


string lscSeq(int n, int m)
{
    if(n < 0 || m < 0)  return "";

    if(a[n] == b[m])   
        return lscSeq(n-1, m-1) + a[n];
    else
    {
        string op1 = lscSeq(n-1, m);
        string op2 = lscSeq(n, m-1);

        return (op1.size()  > op2.size())? op1 : op2;
    }
}

int main()
{
    cin >> a >> b;
    int n = a.size();
    int m = b.size();

    memset(dp, -1, sizeof(dp));

    cout << lcs(n-1, m-1) << endl;
    cout << lscSeq(n-1, m-1) << endl;

    return 0;
}
