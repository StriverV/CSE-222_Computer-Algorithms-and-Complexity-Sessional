#include<bits/stdc++.h>
using namespace std;
vector<int>v(1005);
void print (int n)
{
    for(int i = 0; i < n; i++)
       cout << v[i] << " ";
       
    cout << endl;
}

void InsertionSort(int n)
{
    int cmp = 0, shift = 0;
    for(int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i-1;
        
        while(j >= 0 && key < v[j])
        {
            cmp++;
            v[j+1] = v[j];
            shift++;
            j--;
        }
        v[j+1] = key;
        shift++;
        
        if(j >= 0) cmp++;
        cout << "Step " << i << " : ";
        print(n);
    }
    cout << "shift : " << shift << " & cmp : " <<  cmp << endl;
   
}

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
        
    cout << "Before sorting : ";
    print(n);
    
    InsertionSort(n);
    
    cout << "After sorting : ";
    print(n);
     
    
    return 0;
}
