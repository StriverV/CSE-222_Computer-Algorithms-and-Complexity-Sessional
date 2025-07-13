#include<bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];
int dp[1005][1005];  // dp table for memoization 

//Knapsack top-down DP(memoization) 
// Knapsack recursive function
int knapsack(int i, int C)
{
    // Base case
    if(i < 0 || C <= 0)
    {
        return 0;
    }
    //check if this combination is already taken(memoization) 
    if(dp[i][C] != -1)
    {
        return dp[i][C];
    }

    // if current item's weight is less than or equal to the remaining capacity then we have two options 
    if(weight[i] <= C)
    {
        int op1 = knapsack(i-1, C - weight[i]) + val[i];   //take
        int op2 = knapsack(i-1, C);  //skip

        return dp[i][C] = max(op1,op2);   // memoize and return maximum value
    } 

    // could not take current item as its weight is greater than remaining capacity
    else
    {
        return dp[i][C] = knapsack(i-1, C);   // memoize
    }
}

int main()
{
    int n,C;   
    cin >> n;  //number of items
    cin >> C;  //maximum capacity
    
    // Input elements of "val" array
    for(int i = 0; i <  n;i++)
    {
        cin >> val[i];
    }

     // Input elements of "weight" array 
    for(int i = 0; i <  n;i++)
    {
        cin >> weight[i];
    }
    
    // Initialize dp table with -1
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= C; j++)
        {
            dp[i][j] = -1;
        }
    }
    
    //Call the knapsack function and print total value
    cout <<"Total value : "<< knapsack(n-1,C) << endl;

    return 0;
}