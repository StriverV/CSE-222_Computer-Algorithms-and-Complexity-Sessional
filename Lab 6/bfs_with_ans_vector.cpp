#include<bits/stdc++.h>
using namespace std;

vector<int>adj_list[1005];
bool vis[1005];
vector<int>res;

void bfs(int src)
{
    queue<int>q;
    vis[src] = true;
    q.push(src);
    
    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        res.push_back(par);

        for(auto child : adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
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

    //BFS to always visit children in ascending order
    for(int i = 0; i < n; i++)
    {
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    
    int src;
    cin >> src;
    
    //including disconnected ones
    if(!vis[src])   bfs(src);

    
    for(int i = 0; i < n; i++)
    {
        if(!vis[i])   bfs(i);
    }

    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
