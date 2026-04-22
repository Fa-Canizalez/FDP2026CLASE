#include <iostream>

using namespace std;

int main (){

    int grados;

    cout << "Conversion de grados Celsius a Fahrenheit" << endl;
    cout << "La temperatura en grados Celsius es: " << endl;
    cin >> grados;

    int F = (grados * 9/ 5) + 32;

    cout << "Tu temperatura en grados Fahrenheit es: " << F << endl;

    return 0;
}