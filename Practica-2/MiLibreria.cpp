#include "MiLibreria.h"
#include <iostream>
#include <random>

using namespace std;


namespace MiLibreria {

//Ejercicio 2
void generarArreglo(char *arreglo, int cantidad){

    random_device semilla;
    mt19937 generador(semilla());

    uniform_int_distribution<int> aleatorio('A','Z');

    for (int i=0; i < cantidad; i++){

        *(arreglo + i) = aleatorio(generador);
    }

}

void imprimirArreglo(const char *arreglo, int cantidad){

    for (int i = 0; i < cantidad; i++){

        cout << *(arreglo + i);
    }

    cout << endl;
}

int contarLetra(const char *arreglo, int cantidad, char letra){

    int contador = 0;

    for (int i =0; i < cantidad; i++){

        if (*(arreglo + i) == letra){

            contador++;
        }
    }

    return contador;
}
//--------------------------------------------------

// Ejercicio 4
int convertirNumero(const string &cadena){

    int numero = 0;

    const char *puntero = cadena.c_str();

    for (int i = 0; i <cadena.length(); i++){

        int digito = *(puntero + i) - '0';

        numero = numero * 10 + digito;
    }

    return numero;
}

//---------------------------------------------

// Ejercicio 6

bool esMinuscula(const char *caracter){

    return (*caracter >= 'a' && *caracter <= 'z');

}

char aMayuscula(const char *caracter){

    return static_cast<char>(*caracter - 'a' + 'A');

}


void convertirCadena(std::string *cadena){

    for (int i = 0; i < static_cast<int>((*cadena).size()); ++i){

        char *ptrCaracter = &(*cadena)[i];

        if (esMinuscula(ptrCaracter)){

            *ptrCaracter = aMayuscula(ptrCaracter);
        }

    }

}

//-------------------------------------------------------

// Ejercicio 8
bool esDigito(const char *caracter){

    return (*caracter >= '0' && *caracter <= '9');

}

void separarCadena(const string *original, string *texto, string *numeros){

    for (int i = 0; i < static_cast<int>((*original).size()); ++i){

        const char *ptrCaracter = &(*original)[i];

        if (esDigito(ptrCaracter)){

            (*numeros).push_back(*ptrCaracter);

        }

        else{
            (*texto).push_back(*ptrCaracter);
        }



    }

}

//-------------------------------------------------------

//Ejercicio 10

int valorRomano(const char *caracter){

    switch(*caracter){

        case 'M': return 1000;

        case 'D': return 500;

        case 'C': return 100;

        case 'L': return 50;

        case 'X': return 10;

        case 'V': return 5;

        case 'I': return 1;

        default: return 0;

    }

}

int convertirRomano(const std::string *romano){

    int total = 0;

    int longitud = static_cast<int>((*romano).size());

    for (int i = 0; i < longitud; ++i){

        const char *ptrActual = &(*romano)[i];

        int valorActual = valorRomano(ptrActual);


        if (i + 1 < longitud){

            const char *ptrSiguiente = &(*romano)[i + 1];

            int valorSiguiente = valorRomano(ptrSiguiente);

            if (valorActual < valorSiguiente){

                total -= valorActual;
            }

            else{
                total += valorActual;
            }

        }

        else{

            total += valorActual;
        }
    }

    return total;
}
//-----------------------------------------------------------------


//Ejercicio 12

void leerMatriz(int *matriz, int n){

    for (int fila = 0; fila < n; ++fila){

        for (int columna = 0; columna < n; ++columna){

            cout << "Valor [" << fila << "][" << columna << "]: ";

            int *ptrCelda = (matriz + fila * n + columna);

            cin >> *ptrCelda;
        }

    }
}

void imprimirMatriz(const int *matriz, int n){

    for (int fila = 0; fila < n; ++fila){

        for (int columna = 0; columna < n; ++columna){

            const int *ptrCelda = (matriz + fila*n + columna);

            cout  << *ptrCelda << "\t";

        }
        cout << std::endl;


    }
}

int sumaFila(const int *matriz, int n, int fila){

    int suma = 0;

    for (int columna = 0; columna < n; ++columna ){

        suma += *(matriz + fila * n + columna);
    }

    return suma;

}

int sumaColumna(const int *matriz, int n, int columna){

    int suma = 0;

    for (int fila = 0 ; fila < n;  ++fila){

        suma += *(matriz + fila * n + columna);
    }

    return suma;

}

int sumaDiagonalPrincipal(const int *matriz, int n){

    int suma = 0;

    for (int i ; i < n; ++i){

        suma += *(matriz + i * n + i);

    }

    return suma;

}

int sumaDiagonalSecundaria(const int *matriz, int n){

    int suma = 0;

    for (int i = 0; i < n; ++i){

        suma += *(matriz + i * n +(n - 1 + i));
    }

    return suma;

}

bool tieneRepetidos(const int *matriz, int n){

    int total = n * n;

    for (int i = 0; i < total; ++i){

        for (int j = i + 1; j < total; ++j){

            if (*(matriz + i) == *(matriz + j)){

                return true; // encontramos 2 valores iguales
            }
        }
    }
    return false;
}

bool esCuadradoMagico(const int *matriz, int n){

    if (tieneRepetidos(matriz,n)){

        return false;
    }

    int constante = sumaFila(matriz, n, 0);

    for (int fila = 1; fila < n; ++fila){

        if (sumaFila(matriz, n, fila) != constante){

            return false;
        }
    }

    for (int columna = 0; columna < n; ++columna){

        if (sumaColumna(matriz, n, columna) != constante){

            return false;
        }
    }

    if (sumaDiagonalPrincipal(matriz, n) != constante){

        return false;
    }

    if (sumaDiagonalSecundaria(matriz, n) != constante){

        return false;
    }

    return true;

}

void llenarMatriz(int *matriz){

    int valor = 1;

    for (int fila = 0; fila < N; ++fila){

        for (int columna = 0; columna < N; ++columna){

            int *ptrCelda = (matriz + fila * N + columna);

            *ptrCelda = valor;

            valor++;
        }
    }
}

void imprimirMatriz(const int *matriz){

    for (int fila = 0; fila < N; ++fila){

        for (int columna = 0; columna < N; ++columna){

            const int *ptrCelda = (matriz + fila * N + columna);

            cout << *ptrCelda << "\t";


        }

        cout << endl;
    }
}

void rotar90(const int *origen, int *destino){

    for (int i = 0; i < N; ++i){

        for (int j = 0; j < N; ++j){

            const int *ptrOrigen = (origen + (N - 1 - j) * N + i);

            int *ptrDestino = (destino + i * N + j);

            *ptrDestino = *ptrOrigen;


        }
    }
}

}