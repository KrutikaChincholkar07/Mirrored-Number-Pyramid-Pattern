#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        // Left side
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        // Spaces
        for (int j = 1; j <= 2 * (rows - i); j++)
            cout << "  ";

        // Right side
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}
