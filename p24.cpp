#include<iostream>
using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 7; i++) {
        // space print
        for (j = 1; j <= 7 - i; j++)
            cout << "  ";

        // star print
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }

        // move to next line after each row
        cout << endl;
    }

    return 0;
}
