#include<bits/stdc++.h>
using namespace std;
vector<double>v(100);
vector<double>w(100);
int item_idx[100];

bool cmp(int i, int j)
{
    return ((v[i]/w[i]) > v[j]/w[j]);
}

double fk(int n, int c)
{
    for(int i = 0; i < n; i++)  item_idx[i] = i;

    sort(item_idx, item_idx+n, cmp);
    double total = 0;

    for(int i = 0; i < n; i++)
    {
        int item_no = item_idx[i];

        if(w[item_no] <= c)
        {
            total += v[item_no];
            c -= w[item_no];
        }
        else
        {
            total += (v[item_no]/w[item_no]) * c;
            break;
        }
    }
    
    return total;
}

int main()
{
    int n, c;
    cin >> n >> c;

    for(int i = 0; i < n; i++)   cin >> v[i];
    for(int i = 0; i < n; i++)   cin >> w[i];

    cout << fixed << setprecision(2) <<fk(n, c) << endl;

    return 0;
}
