#include <iostream>

using namespace std;

int main (){

    int numero1, numero2, numero3;

    cout << "Calculador de promedios " << endl;

    cout << "Ingrese su primer numero: " << endl;
    cin >> numero1;

    cout << "Ingrese su segundo numero: " << endl;
    cin >> numero2;

    cout << "Ingrese su tercer numero: " << endl;
    cin >> numero3;

    int promedio = (numero1 + numero2 + numero3) / 3;

    cout << "Su promedio es: " << promedio << endl;

    return 0;


}