#include<bits/stdc++.h>
using namespace std;

// Adjacency list to store an undirected graph
vector<int> adj_list[1005];

// To store the DFS traversal order
vector<int> ans;

// To keep track of visited nodes, create a visited array
bool vis[1005];

// DFS function to traverse the graph
void dfs(int src)
{
    //push the current node to the ans vector
    ans.push_back(src);  
    vis[src] = true;
    
    //visit all unvisited adjacent nodes 
    for(int child : adj_list[src])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    // Input: number of vertices (n) and edges (e)
    int n, e;  
    cin >> n >> e;

    // Take the input for the undirected graph using adjacency list  
    while(e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b); 
        adj_list[b].push_back(a);  
    }

    // Initialize the visited array as false  
    memset(vis, false, sizeof(vis));

    // Call the DFS function
    int src;
    cin >> src;
    dfs(src);

    // print the DFS traversal result
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}