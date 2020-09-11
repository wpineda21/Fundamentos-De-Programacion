#include <iostream>

using namespace std;

int main()
{

    int Uno = 0;
    int dos = 0;
    double Resultado=0;
    int option = 0;

    cout << "Seleccione una de las Siguientes Opciones" << endl;
    cout <<"1)Sumar Dos Numeros"<<endl;
    cout << "2)Restar Dos Numeros" << endl;
    cout << "3)Multiplicar Dos Numeros" << endl;
    cout << "4)Dividir Dos Numeros" << endl;
    cin>>option;

    switch (option){
    case 1: cout<<"Por favor Ingrese dos numeros"<<endl; 
            cin>>Uno;
            cin>>dos;
            Resultado=Uno + dos;
            cout << "El Resultado es :"<<Resultado<< endl;
            break;
    case 2:
        cout << "Por favor Ingrese dos numeros" << endl;
        cin >> Uno;
        cin >> dos;
        Resultado = Uno - dos;
        cout << "El Resultado es :" << Resultado << endl;
        break;
    case 3:
        cout << "Por favor Ingrese dos numeros" << endl;
        cin >> Uno;
        cin >> dos;
        Resultado = Uno * dos;
        cout << "El Resultado es :" << Resultado << endl;
        break;
    case 4:
        cout << "Por favor Ingrese dos numeros" << endl;
        cin >> Uno;
        cin >> dos;
        Resultado = Uno / dos;
        cout << "El Resultado es :" << Resultado << endl;
        break;
    default:
        break;
    }
    return 0;
}
