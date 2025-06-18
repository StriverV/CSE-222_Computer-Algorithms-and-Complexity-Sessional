#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba
    stack<int> st;
    int n;
    cin >> n;  

    // Input n elements into stack
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Print and pop elements (LIFO order)
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

/*
use case:
BFS in graphs, printer queue, scheduling.

LIFO: Last In, First Out
Think of: A pile of plates — you can only take the top one.


queue<int> q;

q.push(10);      // Add element
q.push(20);

q.front();       // Access front → 10
q.pop();         // Remove front (10)
q.empty();       // Check if empty
q.size();        // Number of elements

*/