#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Kalkulator Sederhana" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operation;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Hasil: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Hasil: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Hasil: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Hasil: " << num1 / num2 << endl;
            } else {
                cout << "Error: Pembagian dengan nol!" << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            break;
    }

    return 0;
}