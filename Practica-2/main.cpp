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

        case 14:{

            int original[N * N];

            int rotada90[N * N];

            int rotada180[N * N];

            int rotada270[N * N];

            llenarMatriz(original);

            cout << "Matriz original:" << endl;

            imprimirMatriz(original);

            rotar90(original, rotada90);

            rotar90(rotada90, rotada180);

            rotar90(rotada180, rotada270);

            cout << endl << "Matriz rotada 90 grados:" << endl;

            imprimirMatriz(rotada90);

            cout << endl << "Matriz rotada 180 grados:" << endl;

            imprimirMatriz(rotada180);

            cout << endl << "Matriz rotada 270 grados:" << endl;

            imprimirMatriz(rotada270);

            break;
        }

        case 16:{

            int n = 0;

            cout << "Ingrese el tamano de la malla (n): ";

            cin >> n;

            if (n <= 0 || 2 * n >= MAX_FILAS){

                cout << "El valor de n debe estar entre 1 y " << (MAX_FILAS / 2 - 1) << "." << endl;

                return 0;

            }

            long long pascal[MAX_FILAS * MAX_FILAS];

            construirPascal(pascal);

            long long caminos = calcularCaminos(pascal, n);

            cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos << " caminos." << endl;

            break;

        }

        case 18:{


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
