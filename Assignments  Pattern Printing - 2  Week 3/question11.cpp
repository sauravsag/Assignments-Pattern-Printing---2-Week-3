#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Print spaces
        for (int k = 1; k <= 2 * i - 2; k++) {
            cout << " ";
        }

        // Print stars again
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print stars
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Print spaces
        for (int k = 1; k <= 2 * i - 2; k++) {
            cout << " ";
        }

        // Print stars again
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
