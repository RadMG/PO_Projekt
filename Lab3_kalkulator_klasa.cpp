

#include <iostream>
using namespace std;


class calculator {
private:
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
    double sum(double a, double b) { return(a + b); }
    double diff(double a, double b) { return(a - b); }
    double mult(double a, double b) { return(a * b); }
    double div(double a, double b) {
        if (b == 0) {
            error(0);
            return(a);
        }
        else {
            return(a / b);
        }
    }
    double mod(double a, double b) {
        if (b == 0) {
            error(1);
            return(a);
        }
        else {
            return (a - (int)(a / b) * b);
        }
    }
    void refresh_mem() { // Funkcja aktualizująca informacje o użyciu pamięci
        if (memory == 0) {
            set_mem(0);
        }
        else {
            set_mem(1);
        }
    }
public:
    double calculate(double a, double b, char OP) { //Funkcja zwraca wynik operacji matematycznej na kalkulatorze
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
        refresh_mem();
        return memory;
    }
    void set_mem(bool val){ // Funkcja do ustawienia wartości użycia pamięci.
        mem_used = val;
    }
    bool get_mem() { // Funkcja do pobrania informacji o użyciu pamięci
        return mem_used;
    }
    void handle_input_debug() { // Funkcja obsługująca interfejs terminalowy
        char operation;
        double A_num;
        double B_num;
        cout << ">>Aplikacja kalkulatora. Mozliwe operacje: " << endl;
        cout << ">>Operacje matematyczne: [+, -, *, /, %]" << endl;
        cout << ">>Komendy: [C] - czysci pamiec, [E] - zamyka kalkulator" << endl;
        cout << "[G] - pobiera informacje o stanie pamieci, [S] - ustawia informacje o uzyciu pamieci" << endl;
        cout << endl;
        while (1) {
            cout << ">Podaj operacje do wykonania: ";
            cin >> operation;
            if (operation == 'C') {
                memory = 0;
            }
            else if (operation == 'E') {
                exit(0);
            }
            else if (operation == 'G') {
                cout << "Pamiec uzyta ? [0/1]: " << get_mem() << endl;
            }
            else if (operation == 'S') {
                bool x;
                cout << ">Ustaw informacje o uzyciu pamieci [0/1]: ";
                cin >> x;
                set_mem(x);
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
    }
};



int main() {
    calculator Calc;
    Calc.handle_input_debug();
}
