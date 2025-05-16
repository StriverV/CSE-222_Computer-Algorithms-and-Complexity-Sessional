#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int linearSearch(int A[], int n, int target) 
{
    for (int i = 0; i < n; i++) 
    {
        if (A[i] == target) 
           return i;   
    }
    return -1;
}

int main() 
{
    Naba;
    
    int n;  cin >> n;
    int a[n]; 
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    

    int target;   cin >> target;

    int result = linearSearch(A, n, target);

    if (result != -1) 
        cout << "Found at index " << result <<endl;
    else 
        cout << "Not Found" << endl;
    

    return 0;
}
