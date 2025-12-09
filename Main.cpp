#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

// FUNCIONES 2D

// TRIÁNGULO (equilátero)
float areaTriangulo(float lado) {
    return (sqrt(3) / 4) * lado * lado;   
}

float perimetroTriangulo(float lado) {
    return 3 * lado;                      
}

// RECTÁNGULO
float areaRectangulo(float base, float altura) {
    return base * altura;                 
}

float perimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);           
}

// FUNCIONES 3D

// CUBO
float areaCubo(float lado) {
    return 6 * lado * lado;              
}

float volumenCubo(float lado) {
    return lado * lado * lado;            
}

// CONO
float areaCono(float radio, float generatriz) {
    return M_PI * radio * (radio + generatriz);
}

float volumenCono(float radio, float altura) {
    return (M_PI * radio * radio * altura) / 3.0;
}

// PROGRAMA PRINCIPAL

int main() {
    char opcion;
    
    //MENU
    cout << "FIGURAS DISPONIBLES\n";
    cout << "A. CONO (3D)\n";
    cout << "B. CUBO (3D)\n";
    cout << "C. TRIANGULO (2D)\n";
    cout << "D. RECTANGULO (2D)\n\n";

    cout << "Elige una figura: ";
    cin >> opcion;
    opcion = toupper(opcion);

    cout << "\n";

    switch(opcion){

        // CONO
        case 'A': {
            cout << "Has elegido: CONO (3D)\n";

            float radio, altura, generatriz;

            cout << "Introduce el radio del cono (cm): ";  
            cin >> radio;
            cout << "Introduce la altura del cono (cm): "; 
            cin >> altura;
            cout << "Introduce la hipotenusa del cono (cm): ";
            cin >> generatriz;

            float area = areaCono(radio, generatriz);
            float volumen = volumenCono(radio, altura);

            cout << "\nAREA = " << area << " cm2\n";
            cout << "VOLUMEN = " << volumen << " cm3\n";

            break;
        }

        //CUBO
        case 'B': {
            cout << "Has elegido: CUBO (3D)\n";

            float lado;  
            cout << "Introduce la longitud del lado (cm): ";
            cin >> lado;

            float area = areaCubo(lado);
            float volumen = volumenCubo(lado);

            cout << "\nAREA = " << area << " cm2\n";
            cout << "VOLUMEN = " << volumen << " cm3\n";

            break;
        }

        // TRIANGULO
        case 'C': {
            cout << "Has elegido: TRIANGULO (2D)\n";
            cout << "(Se calculará como triángulo equilátero)\n";

            float lado;  
            cout << "Introduce la longitud del lado (cm): "; 
            cin >> lado;

            float area = areaTriangulo(lado);
            float perimetro = perimetroTriangulo(lado);

            cout << "\nAREA = " << area << " cm2\n";
            cout << "PERIMETRO = " << perimetro << " cm\n";

            break;
        }

        // RECTANGULO
        case 'D': {
            cout << "Has elegido: RECTANGULO (2D)\n";

            float base, altura; 
            cout << "Introduce la base (cm): ";
            cin >> base;
            cout << "Introduce la altura (cm): "; 
            cin >> altura;

            float area = areaRectangulo(base, altura);
            float perimetro = perimetroRectangulo(base, altura);

            cout << "\nAREA = " << area << " cm2\n";
            cout << "PERIMETRO = " << perimetro << " cm\n";

            break;
        }

        default:
            cout << "Opción no válida.\n";
    }

    return 0;
}

