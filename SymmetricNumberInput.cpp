#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Left side
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Spaces
        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
            cout << "  ";
        }

        // Right side
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
