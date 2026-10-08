//sprememba
#include <iostream>

using namespace std;

int main () {
    //komentar
    int x;
    int y;
    char operacija;

    cout << "Vpisite celo stevilo: " ;
    cin >> x;
    cout << "Vpisite celo stevilo: ";
    cin >> y;

    cout << "Vpisite operacijo, ki bi jo radi izvedli(+,-,*,/): ";
    cin >> operacija;

    int resitev;
    if (operacija == '+') {
        resitev = x + y;
    }
    if (operacija == '-') {
        resitev = x - y;
    }
    if (operacija == '*') {
        resitev = x * y;
    }
    if (operacija == '/'){ resitev = x / y;}


cout << "Resitev je: " << resitev;
    cout << endl;
    return 0;
}