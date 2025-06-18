#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // 1. Extract the node
        int par = q.front();
        q.pop();

        // 2. Work with that node 
        cout << par << " ";

        // 3. Push its children 
        for(int child : adj_list[par])
        {
            if( !vis[child])
            {
                q.push(child);
                vis[child] = true;
            }      
        }

    }  
}


int main()
{
    Naba

    int n, e;  
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b); 
        adj_list[b].push_back(a);  
    }

    memset(vis, false, sizeof(vis));

    bfs(0);

    return 0;
}