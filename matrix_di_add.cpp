#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Sum the primary diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Display the sum of diagonal elements
    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
