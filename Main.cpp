#include <iostream>
using namespace std;

//OPCIONES
int main() {
    int opcion;

    cout << "A. CONO (3D)";
    cout << "B. CUBO (3D)";
    cout << "C. TRIANGULO (2D)";
    cout << "D. RECTANGULO (2D)";
    cout << "\n";
    cout << "Elige tu primera figura para conocer su AREA y VOLUMEN ";
    cin >> opcion;
//PASAR A MAYUSCULAS POR SI ESCRIBE EN MINUSCULAS
opcion=toupper(opcion);
//ELEGIR LA OPCIÓN
if (opcion == 'A') cout << "area y volumen de figura A";
else if (opcion =='B') cout <<"lo de B";
else if (opcion == 'C') cout <<"respuesta de c";
else if (opcion == 'D') cout <<"Miau D";
else cout << "elige una de las opciones si o si:)";

return 0;
  
}