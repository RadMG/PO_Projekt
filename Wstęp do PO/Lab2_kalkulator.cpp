

#include <iostream>
using namespace std;

double memory = 0;
bool mem_used = 0;

void error(int a) {
    cout << ">>[Error] ";
    switch (a) {
    case 0:
        cout << "Niedozwolona operacja: dzielenie przez zero." << endl;
        break;
    case 1:
        cout << "Niedozwolona operacja: modulo zera." << endl;
        break;
    case 2:
        cout << "Niewlasciwy wybor operacji" << endl;
        break;
    default:
        break;
    }
    cout << "-----------------------------------------------------------------" << endl;
}

    void check_mem() {
        if (memory == 0) {
            mem_used = 0;
        }
        else {
            mem_used = 1;
        }
    }

    double sum(double a, double b) { return(a + b); }
    double diff(double a, double b) { return(a - b); }
    double mult(double a, double b) { return(a * b); }
    double div(double a, double b) {
        if (b == 0) {
            error(0);
            return(0);
        }
        else {
            return(a / b);
        }
    }
    double mod(double a, double b) {
        if (b == 0) {
            error(1);
            return(0);
        }
        else {
            return (a - (int)(a / b) * b);
        }
    }



    double calculate(double a, double b, char OP) {
        switch (OP) {
        case '+':
            memory = sum(a, b);
            break;
        case '-':
            memory = diff(a, b);
            break;
        case '*':
            memory = mult(a, b);
            break;
        case '/':
            memory = div(a, b);
            break;
        case '%':
            memory = mod(a, b);
            break;
        default:
            error(2);
        }
        return memory;
    }
    void handle_input() {
        char operation;
        double A_num;
        double B_num;

        cout << ">Podaj operacje do wykonania: ";
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
                A_num = memory;
                cout << ">Podaj liczbe B: ";
                cin >> B_num;
                cout << "Wynik operacji: " << calculate(A_num, B_num, operation) << endl;
            }
        }
    }

    void hello_msg(){
        cout << ">>Aplikacja kalkulatora. Mozliwe operacje: " << endl;
        cout << ">Operacje matematyczne: [+, -, *, /, %]" << endl;
        cout << ">Komendy: [C] - czysci pamiec, [E] - zamyka kalkulator " << endl;
        cout << endl;
    }


    int main() {
        hello_msg();
        while (1) {
            check_mem();
            handle_input();
        }
    }
