#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
using namespace std;

void merge(int c[], int l, int mid, int r)      // here merge is conquer
{
    int n = mid-l+1;
    int a[n];
    int k = l;
    for(int i = 0; i < n; i++)
        a[i] = c[k++];


    int m = r - mid;
    int b[m];
    k = mid+1;
    for(int i = 0; i < m; i++)
        b[i] = c[k++];

    int i = 0, j = 0, curr = l;

    while(i < n && j < m)
    {
        if(a[i] < b[j])     
            c[curr++] = a[i++];
        else
            c[curr++] = b[j++];
    }

    while(i < n)
    {
        c[curr++] = a[i++];
    }

    while(j < m)
    {
        c[curr++] = b[j++];
    }
}

void mergeSort(int a[], int l, int r)      // here mergeSort is  divide
{
    int mid = (l+r)/2;
    if(l < r)
    {
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    Naba;

    int n;   cin >> n;

    int a[n];
    for(int i =0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n-1);      //divide(a, 0, n-1);   


    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << nl;

    return 0;
}