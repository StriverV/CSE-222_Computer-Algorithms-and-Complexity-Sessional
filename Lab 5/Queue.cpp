#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba
    queue<int> q;
    int n;
    cin >> n;  

    // Input n elements into queue
    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // Print and remove elements (FIFO order)
    while(!q.empty()) 
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


/*
FIFO: First In, First Out
Think of: A line at a ticket counter — first comes, first served.

stack<int> st;

st.push(10);     // Add element
st.push(20);

st.top();        // Access top element → 20
st.pop();        // Remove top element (20)
st.empty();      // Check if empty
st.size();       // Number of elements

*/