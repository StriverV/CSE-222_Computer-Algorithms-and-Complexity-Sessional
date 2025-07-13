#include <bits/stdc++.h>
using namespace std;

// Structure to store item value and weight
struct Item {
    double value;
    double weight;
};

// Sort items by value/weight ratio (high to low)
bool compare(Item a, Item b) {
    return (a.value / a.weight) > (b.value / b.weight);
}

int main() {
    int n;         // number of items
    double C;      // capacity of knapsack
    cin >> n >> C;

    vector<Item> items(n);

    // Input values
    for (int i = 0; i < n; i++)
        cin >> items[i].value;

    // Input weights
    for (int i = 0; i < n; i++)
        cin >> items[i].weight;

    // Sort items by value per weight (descending)
    sort(items.begin(), items.end(), compare);

    double total_value = 0.0;  // total value in knapsack

    for (int i = 0; i < n && C > 0; i++) {
        if (items[i].weight <= C) {
            // Take full item
            C -= items[i].weight;
            total_value += items[i].value;
        } else {
            // Take fractional part
            total_value += items[i].value * (C / items[i].weight);
            C = 0;
        }
    }

    cout << "Total Value : " << total_value << endl;

    return 0;
}
