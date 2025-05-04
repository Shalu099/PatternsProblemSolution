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
        for(char name = 'A'; name <= 'A'+r-1; name++) {
            cout << name << " ";
        }

        cout << endl; // Move to the next line after each row
    }
    return 0;
}
