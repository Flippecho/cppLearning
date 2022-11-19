#include <iostream>

using namespace std;

void printRhombus(int n);

int main() {
    printRhombus(7);
    return 0;
}

void printRhombus(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= abs((n + 1) / 2 - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - 2 * abs((n + 1) / 2 - i); j++) {
            cout << "*";
        }

        cout << endl;
    }
}