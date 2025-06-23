#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 3;
    double matrix[n][n + 1] = {
        {3, 1, 1, 12},
        {2, 10, 1, 13},
        {1, 1, 5, 7}
    };

    // Gauss-Jordan Elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        double diag = matrix[i][i];
        for (int j = 0; j <= n; j++) {
            matrix[i][j] /= diag;
        }

        // Make other elements in column i = 0
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = matrix[k][i];
                for (int j = 0; j <= n; j++) {
                    matrix[k][j] -= factor * matrix[i][j];
                }
            }
        }
    }

    // Print solutions
    cout << fixed << setprecision(2);
    cout << "Solutions:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << matrix[i][n] << endl;
    }

    return 0;
}