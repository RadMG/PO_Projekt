
#include <iostream>
using namespace std;


void zad_1a(unsigned int n) {
    for (unsigned i = 0; i <= n; i++) {
        cout << (i % 10);
    }
}

void zad_1b(unsigned int n) {
    for (unsigned i = 0; i <= n; i++) {
        cout << (i % 2);
    }
}

void zad_1c(unsigned int n) {
    for (unsigned i = 0; i <= n; i++) {
        cout << (i % 4);
    }
}

void zad_1d(unsigned int n) {
    for (unsigned i = 0; i <= n; i++) {
        cout << 1 << 2 << 3;
    }
}


void zad_1e(unsigned int n) {
    for (unsigned i = 0; i <= n; i++) {
        cout  << 0 << 1 << 2 << 3;
        if (i + 1 != n) cout << 4 << 5 << 6 << 7 << 8 << 9;
    }
}


void zad_2d(int n) {
    int x = n;
    int y = 0;
    while (y < x) {
        for (int i = x; i > 0 + y; i--) {
            cout << i;
        }
        cout << endl;
        y = y + 1;
    }
}


int main()
{
    zad_2d(5);
}


