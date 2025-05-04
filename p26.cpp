#include<iostream>
using namespace std;

int main() {
    int r, c;
    for(r = 1; r <= 5; r++) {
        // Print spaces
        for(c = 1; c <= 5 - r; c++) {
            cout << "  ";
        }

        // Print numbers
        for(c = 1; c <= r; c++) {
            cout << c << " ";
        }

        cout << endl; // Move to the next line after each row
    }
    return 0;
}
