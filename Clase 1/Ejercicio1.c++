#include <iostream>

using namespace std;

int main()
{

    int Uno = 0;
    int dos = 0;
    int resultado = 0;

    cout << "Por favor ingrese un Numero  " << endl;
    cin >> Uno;
    cout << "Por favor ingrese otro Numero " << endl;
    cin >> dos;

    if (Uno < 100 && dos <100)
    {
        resultado = Uno + dos;
        cout << "la suma de estos dos numeros es: " << resultado << endl;
    }
    else 
    {
        cout << "Los numeros Ingresados no son menores a 100 " <<endl;
    }

    return 0;
}
