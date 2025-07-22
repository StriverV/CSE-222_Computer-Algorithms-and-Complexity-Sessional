#include<bits/stdc++.h>
using namespace std;

double v[100];
double w[100];
int item_idx[100];

bool cmp(int i, int j)
{
    return ( (v[i]/w[i])  >  (v[j]/w[j]));
}

double fractionalKnapsack(int n, int c)
{
    for(int i = 0; i < n; i++)   
        item_idx[i] = i;

    sort(item_idx, item_idx + n, cmp);

    double total = 0.0;
    
    for(int i = 0; i < n; i++)
    {
        int itemNo = item_idx[i];
        if(w[itemNo] <= c)
        {
            total += v[itemNo];
            c -= w[itemNo];
        }
        else
        {
            total += (v[itemNo]/w[itemNo]) * c;
            break;
        }
    }

    return total;
}

int main()
{
    int n, c;
    cin >> n >> c;
    
    for(int i = 0; i < n; i++)  cin >> v[i];
    for(int i = 0; i < n; i++)  cin >> w[i];

    cout << fractionalKnapsack(n, c) << endl;

    return 0;
}
