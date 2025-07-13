#include <bits/stdc++.h>
using namespace std;
vector<int> val, weight;
vector<vector<int>> dp;

// Function to solve 0-1 Knapsack using bottom-up dynamic programming
int knapsack(int n, int W) 
{
    // Build dp table iteratively
    for (int i = 0; i <= n; i++)        // For each item count from 0 to n
    {           
        for (int j = 0; j <= W; j++)    // For each capacity from 0 to W
        {         
            // Base case:
            if (i == 0 || j == 0) 
            {
                dp[i][j] = 0;
            } 
            else {
                int pick = 0;
                // If current item's weight <= current capacity j
                // We can pick this item and add its value plus best value without this item's weight
                if (weight[i - 1] <= j)
                    pick = val[i - 1] + dp[i - 1][j - weight[i - 1]];

                // Option to NOT pick the current item
                int notPick = dp[i - 1][j];

                // Take the better of picking or not picking
                dp[i][j] = max(pick, notPick);
            }
        }
    }
    // dp[n][W] contains the answer for n items and capacity W
    return dp[n][W];
}

int main() {
    int n, C;
    cin >> n >> C;   // Input number of items and knapsack capacity

    val.resize(n);      // Resize vectors to hold n elements
    weight.resize(n);
    dp.resize(n + 1, vector<int>(C + 1, 0));  // Initialize DP table with zeros

    // Input values of items
    for (int i = 0; i < n; i++)
        cin >> val[i];

    // Input weights of items
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    // Call knapsack function and print the result
     cout << "Total Value : " << knapsack(n, C) << endl;

    return 0;
}
