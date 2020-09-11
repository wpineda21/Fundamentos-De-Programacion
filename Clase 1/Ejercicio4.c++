#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int option = 0;
    const float Pi = 3.1416;

    cout << "Seleccione una de las Siguientes Opciones" << endl;
    cout << "1)Calcular el area de un Circulo" << endl;
    cout << "2)Calcular el area de un Cuadrado" << endl;
    cout << "3)Calcular el area de un Rectangulo" << endl;
    cout << "4)Calcular el area de un triangulo" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        
        double radio;
        double numero;
        double areaCirculo;

        cout << "Por favor Ingrese el radio del circulo" << endl;
        cin >> radio;

        numero= ((Pi*(pow(radio,2))));
        areaCirculo=numero/2;

        cout << "El Resultado es :" << areaCirculo << endl;
        break;
    case 2:
        
        float Ladocuadrado;
        float areaCuadrado;
        cout<<"ingrese un lado del cuadrado"<<endl;
        cin>>numero;

        areaCuadrado=pow(numero,2);

        cout << "El Resultado es :" << areaCuadrado << endl;

        break;
    case 3:

        float baseRectangulo;
        float alturaRectangulo;
        float areaRectangulo;

        cout << "ingrese La base del Rectangulo" << endl;
        cin >> baseRectangulo;
        cout << "ingrese La altura del Rectangulo" << endl;
        cin >> alturaRectangulo;

        areaRectangulo = baseRectangulo * alturaRectangulo;

        cout << "El Resultado es :" << areaRectangulo << endl;

        break;
    case 4:
        float baseTriangulo;
        float alturaTriangulo;
        float areaTriangulo;

        cout << "ingrese La base del Triangulo" << endl;
        cin >> baseTriangulo;
        cout << "ingrese La altura del Triangulo" << endl;
        cin >> alturaTriangulo;

        areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;

        cout << "El Resultado es :" << areaTriangulo << endl;

        break;
    default:
        break;
    }
    return 0;
}
