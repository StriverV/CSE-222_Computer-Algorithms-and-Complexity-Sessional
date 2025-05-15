#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


void BubbleSort(vector<int>& v)     // arr-> int a[]
{
    int n = v.size();
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}

int main()
{
    Naba;
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++)
        cin >> v[i];
    
    BubbleSort(v);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
