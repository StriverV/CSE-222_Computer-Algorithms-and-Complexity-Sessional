
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i = 0; i  < n; i++)
        cin >> v[i];

    for(int i = 0; i < n - 1; i++)   //steps
    {
        bool swapped = 0;

        for(int j = 0; j < n - i -1; j++)
        {
            if(v[j] > v[j+1])     // for Ascending Order (Increasing Order)
            {
                swap(v[j], v[j+1]);
                swapped = 1;
            }       
        }

        if(!swapped)    break;
    }

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout<<nl;

    return 0;
}