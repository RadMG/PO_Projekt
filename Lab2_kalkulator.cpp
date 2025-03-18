

#include <iostream>
using namespace std;

double memory = 0;
bool mem_used = 0;

void error(int a) {
    cout << "error" << endl;
}

double calculate(double a, double b, char OP) {
    switch (OP) {
    case '+':
        memory = a + b;
        mem_used = 1;
        break;
    case '-':
        memory = a - b;
        mem_used = 1;
        break;
    case '*':
        memory = a * b;
        mem_used = 1;
        break;
    case '/':
        if (b == 0) {
            error(0);
            break;
        }
        else {
            memory = a / b;
            mem_used = 1;
            break;
        }
    case '%':
        if (b == 0) {
            error(1);
            break;
        }
        else {
            memory = // Jak zrobić modulo?
            mem_used = 1;
            break;
        }
    default:
        error(2);
    } 
    return memory;
}

void handle_input() {
    char operation;
    double A_num;
    double B_num;
    if (mem_used == 0) {
        cout << ">>Aplikacja kalkulatora. Mozliwe operacje: " << endl;
        cout << ">Operacje matematyczne: [+, -, *, /, %]" << endl;
        cout << ">Komendy: [C] - czysci pamiec, [E] - zamyka kalkulator " << endl;
        cout << endl;
        cout << ">Podaj operacje do wykonania: ";
    }

    if (mem_used == 1) {
        cout << ">Podaj operacje do wykonania: ";
    }
        cin >> operation;
        if (operation == 'C') {
            memory = 0;
        } 
        else if (operation == 'E') {
            exit(0);

        }
        else {
            if (mem_used == 0) {
                cout << ">Podaj liczbe A: ";
                cin >> A_num;
                cout << ">Podaj liczbe B: ";
                cin >> B_num;
                cout << "Wynik operacji: " << calculate(A_num, B_num, operation) << endl;
            }
            else {
                cout << ">Podaj liczbe B: ";
                cin >> B_num;
                cout << "Wynik operacji: " << calculate(memory, B_num, operation) << endl;
            }
        }
    }


int main()
{
    while(1) {
        handle_input();
}
}
