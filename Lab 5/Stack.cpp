#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba
    stack<int> st;
    int n;
    cin >> n;  

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    st.push(10);                     // Add element
    cout << st.top() << endl;        // Access top element → 20
    st.pop();                         // Remove top element (20)
    cout <<  st.empty() << endl;      // Check if empty
    cout << st.size() << endl;       // Number of elements

    // Print and pop elements (LIFO order)
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

