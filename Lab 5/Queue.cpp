#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    Naba
    queue<int> q;
    int n;
    cin >> n;  

    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        q.push(x);
    }

    
    cout << q.push(10) << endl;      // Add element
     //  q.front();                 // Access front → 10
     q.pop();                       // Remove front (10)
    //  q.empty();                  // Check if empty
    cout << q.size() << endl;        // Number of elements
    
   // Print and remove elements (FIFO order)
    while(!q.empty()) 
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}




