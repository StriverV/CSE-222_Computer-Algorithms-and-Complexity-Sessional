#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
vector<int>ans;
void dfs(int src)
{
    vis[src] = true;
    ans.push_back(src);

    for(int child : adj_list[src])
    {
        if(!vis[child])  dfs(child);
    }

}
int main()
{
    int n,e;
    cin >> n >> e;
    memset(vis, false, sizeof(vis));
    while(e--)
    {
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 0; i < n; i++)
        if(!vis[i])  dfs(i);

    for(int i : ans)
       cout << i << " ";

    return 0;
}
