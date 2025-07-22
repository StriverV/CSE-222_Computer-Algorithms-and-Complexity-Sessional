#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
vector<int>v(1005);

void print(int n)
{
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
}
void BubbleSort(int n)
{
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        cout <<"step " << i+1 <<" : ";
        for(int j = 0; j < n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
                swapped=true;
                cnt++;
            }
                
        }
        print(n);
        cout<<endl;
      
        if(!swapped)
        {
            cout << "No swapped happen" << endl;
            break;
        }
            
    }
    cout << "Total swapped : " << cnt << endl;
    print(n);
}

int main()
{
    Naba;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
       cin >> v[i];
       
    BubbleSort(n);
    
    return 0;
}
