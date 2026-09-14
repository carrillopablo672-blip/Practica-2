#include <iostream>
#include "MiLibreria.h"


using namespace std;
using namespace MiLibreria;
int main(){

    int ejercicio;

    cout << "Ingrese el numero del ejercicio: ";

    cin >> ejercicio;

    while (ejercicio > 0) {

        switch (ejercicio) {

        case 2:{
            const int cantidad_letras = 200;

            char arreglo[cantidad_letras];

            generarArreglo(arreglo, cantidad_letras);

            cout << "Este es el arreglo: " << endl;

            imprimirArreglo(arreglo, cantidad_letras);

            cout << endl;
            cout << "Cantidad de veces que aparece cada letra: " << endl;

            for (char letra = 'A'; letra <= 'Z'; letra++){

                int cantidad = contarLetra(arreglo, cantidad_letras, letra);

                cout << letra << ": " << cantidad << endl;
            }

            break;
        }

        case 4:{

            string cadena;
            int numero;

            cout << "Ingrese una cadena de numeros: ";
            cin >> cadena;

            //numero = convertirNumero(cadena);

            cout << "El numero convertido es: " << numero << endl;

            break;

        }

        case 6:{

            string original;

            cout << "Ingrese una cadena de caracteres: ";

            cin >> original;

            string *ptrOriginal = &original;

            string resultado = *ptrOriginal;

            string *ptrResultado = &resultado;

            convertirCadena(ptrResultado);

            cout << "La cadena original es: " << *ptrOriginal << endl;

            cout << "En mayusculas: " << *ptrResultado;

            break;

        }

        case 8:{

            string original;

            cout << "Ingrese una cadena de caracteres: ";
            cin >> original;

            string texto;
            string numeros;

            const string *ptrOriginal = &original;
            string *ptrTexto = &texto;
            string *ptrNumeros = &numeros;


            separarCadena(ptrOriginal, ptrTexto, ptrNumeros);

            cout << "Original: " << *ptrOriginal << "." << endl;

            cout << "Texto: " << *ptrTexto << " Numero: " << *ptrNumeros;

            break;

        }

        case 10:{

            string numeroRomano;

            cout << "Ingrese un numero romano: ";

            cin >> numeroRomano;


            const string *ptrRomano = &numeroRomano;

            int resultado = convertirRomano(ptrRomano);

            int *ptrResultado = &resultado;

            cout << "El numero ingresado fue: " << *ptrRomano << endl;

            cout << "Que corresponde a: " << *ptrResultado << "." << endl;

            break;

        }

        case 12:{

           int n = 0;

           cout << "Ingrese el tamano de la matriz cuadrada (n): ";

           cin >> n;

           int matriz[MAX_N * MAX_N];

           if (n <= 0 || n > MAX_N){

               cout << "El tamaño debe estar entre 1 y " << MAX_N << "." << endl;

               return 0;
           }

           cout << "Ingrese los " << (n * n) << " valores de la matriz:" << endl;

           leerMatriz(matriz, n);

           cout << endl << "Matriz ingresada:" << endl;

           imprimirMatriz(matriz, n);

           cout << endl;

           if (esCuadradoMagico(matriz, n)){

               cout << "La matriz SI es un cuadrado magico." << endl;

           }
           else{

               cout << "La matriz NO es un cuadrado magico." << endl;

           }

           break;

        }

        default:

            cout << "Ese ejercicio no existe." << endl;
        }
        cout << endl;
        cout << "Ingrese el numero del ejercicio: ";
        cin >> ejercicio;

    }

    cout << "Programa terminado." << endl;
    return 0;
}
