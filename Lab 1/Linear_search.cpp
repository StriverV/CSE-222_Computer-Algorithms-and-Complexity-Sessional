#include <iostream>
using namespace std;

int linearSearch(int A[], int n, int target) {
    for (int i = 0; i < n; i++) 
    {
        if (A[i] == target) 
           return i;   
    }
    return -1;
}

int main() {
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