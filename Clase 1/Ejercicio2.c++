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

    resultado=Uno+dos;

    cout<<"la suma de estos dos numeros es: "<<resultado<<endl;

    if (Uno>dos)
    {
        cout<<"El numero : "<<Uno<<" es mayor que: "<<dos<<endl;
    }
    else if(dos>Uno)
    {
        cout << "El numero : " << dos << " es mayor que: " << Uno << endl;
    }else if(Uno==dos){
        cout << "Los numeros Ingresados son iguales" << endl;
    }
    
    return 0;
}
