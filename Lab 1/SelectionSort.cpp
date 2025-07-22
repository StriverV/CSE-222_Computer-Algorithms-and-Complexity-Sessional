#include<bits/stdc++.h>
using namespace std;

vector<int>v(1005);

void print(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int n)
{
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(v[min_idx] > v[j])
            {
                min_idx = j;
            }   
        }
        if(min_idx != i)
        {
            swap(v[i], v[min_idx]);
            cnt++;
        }
        cout << "step " << i+1 <<" : ";
        print(n);
    }
    cout <<"Total swaps: " << cnt << endl;
}

int main()
{
    int n; cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    print(n);
    SelectionSort(n);
    print(n);

    return 0;
}
