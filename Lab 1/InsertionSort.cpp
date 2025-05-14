#include <iostream>
using namespace std;

void insertionSort(int a[], int n) 
{
    for (int i = 1; i < n; i++)   // from 2nd element 
    {
        int value = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > value)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = value;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    

    insertionSort(a, n);

    for (int i = 0; i < n; i++) {l
        cout << arr[i] << " ";
    
    cout << endl;

    return 0;
}