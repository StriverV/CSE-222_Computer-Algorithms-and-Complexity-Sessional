#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
using namespace std;


int partition(int a[], int l, int r)
{
    int pivot = a[r];     // taking the last element as pivot
    int i = l - 1;

    for (int j = l; j < r; j++)
      {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);  // place pivot at correct position
    return i + 1;
}

void quickSort(int a[], int l, int r) 
{
    if (l < r) 
    {
        int p = partition(a, l, r);  // partition index
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);
    }
}

int main() 
{
    Naba;
    int n;  cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
