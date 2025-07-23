#include<bits/stdc++.h>
using namespace std;
vector<int>al[100];
bool vis[100];
int dp[100][100];

void dfs(int s)
{
    vis[s] = true;
    cout << s << " ";
    for(int i : al[s])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    memset(dp, -1, sizeof(dp));
    memset(vis, -1, sizeof(vis));

    while(e--)
    {
        int a, b;
        cin >> a >> b;

        al[a].push_back(b);
        al[b].push_back(a);
    }
    
    for(int i = 0; i < n; i++)
    {
        sort(al[i].begin(), al[i].end());
    }
    dfs(0);

    return 0;
}
