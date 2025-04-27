#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
using namespace std;

int main()
{
    Naba;
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i = 0; i  < n; i++)
        cin >> v[i];
            
    int target;
    cin >> target;
    
    int lp = 0, rp = n-1;
    bool flag = 0;
    int idx = -1;
    while( lp <= rp)          // O(logn)
    {
        int mid = (lp + rp)/2;
    
        if(v[mid] == target  )  
        {
            flag = 1;
            idx = mid;
            break;
        }   
    
        else if(target  < v[mid])   rp = mid - 1;
    
        else   lp = mid + 1;
    }

    flag? cout << "Found" << nl: cout << "Not Found" << nl;

    return 0;
}
