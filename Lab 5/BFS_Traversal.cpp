#include<bits/stdc++.h>
using namespace std;

// Adjacency list to store an undirected graph
vector<int> adj_list[1005];

// To store the BFS traversal order
vector<int> ans;

// To keep track of visited nodes, create a visited array
bool vis[1005];

// BFS function to traverse the graph
void bfs(int src)
{
    // Create a queue 
    queue<int>q;

    // Push the source node into the queue & Mark it as visited 
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // Store front of the queue in a variable and then dequeue it from the queue 
        int node = q.front();
        q.pop();
        ans.push_back(node);  

        // Get all unvisited  children of the current node & push them into the queue if not visited
        for(int child : adj_list[node])
        {
            if( !vis[child])
            {
                q.push(child);
                vis[child] = true;  // mark it as visited.
            }      
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

    // Call the bfs function
    int src;
    cin >> src;
    bfs(src);

    // print the BFS traversal result
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}