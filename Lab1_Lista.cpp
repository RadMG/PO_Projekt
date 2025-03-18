
#include <iostream>
using namespace std;

void zad1_a(unsigned int n) {
    for (int i = 0; i < n; i++) {
        cout << i % 10;
    }
}
void zad1_b(unsigned int n) {
    for (int i = 0; i < n; i++) {
        cout << i % 2;
    }
}
void zad1_c(unsigned int n) {
    for (int i = 0; i < n; i++) {
        cout << i % 4;
    }
}
void zad1_d(unsigned int n) {
    int i = 0;
    while (n>0) {
        if (i % 4 == 3) {
            cout << i % 4;
            i = 0;
            n--;
        }
        else {
            cout << i % 4;
            i++;
        }
    }
}
void zad1_e(unsigned int n) {
    int i = 0;
    while (n > 0) {
        if (i % 10 == 3) {
            cout << i % 10;
            i++;
            n--;
        }
        else if (i % 10 == 9){
            cout << i % 10;
            i = 0;
        }
        else {
            cout << i % 10;
            i++;
        }
    }
}
void zad1_f(unsigned int n) {

}


void zad2_a(unsigned int n) {
    for (;n > 0; n--) {
        for (int i = 6; i > 0; i--) {
            cout << i;
        }
        cout << endl;
    }
}
void zad2_b(unsigned int n) {
    for (n = 6; n > 0; n--) {
        for (int i = 1; i < (7-n); i++) {
            cout << i;
        }
        cout << endl;
    }
}
void zad2_c(unsigned int n) {}
void zad2_d(unsigned int n) {
    for (n = 5; n > 0; n--) {
        for (int i = 5; i > 5-n; i--) {
            cout << i;
        }
        cout << endl;
    }
}
void zad2_e(unsigned int n) {
    for (n = 5; n > 0; n--) {
        for (int i = 6-n; i <= 5; i++) {
            cout << i;
        }
        cout << endl;
    }
}

void zad2_f(unsigned int n) {
void zad2_g(unsigned int n) {}

int main()
{
    int n = 0;
    cout << "Podaj n: ";
        cin >> n;
        cout << "Zadanie 1 :";
        cout << endl;

        zad1_a(n);
        cout << endl;
        zad1_b(n);
        cout << endl;
        zad1_c(n);
        cout << endl;
        zad1_d(n);
        cout << endl;
        zad1_e(n);
        cout << endl;
        zad1_f(n);

        cout << endl;
        cout << endl;

        cout << "Zadanie 2 :";
        cout << endl;

        zad2_a(n);
        cout << endl;
        zad2_b(n);
        cout << endl;
        zad2_c(n);
        cout << endl;
        zad2_d(n);
        cout << endl;
        zad2_e(n);
        cout << endl;
        zad2_f(n);
        cout << endl;
        zad2_g(n);
}


