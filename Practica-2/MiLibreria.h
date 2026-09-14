#ifndef MILIBRERIA_H
#define MILIBRERIA_H
#include <string>

#include <cstddef>

namespace MiLibreria{

    //Ejercicio 2

    void generarArreglo(char *arreglo, int cantidad);

    void imprimirArreglo(const char *arreglo, int cantidad);

    int contarLetra(const char *arreglo, int  cantidad, char letra);

    //----------------------------------------

    //Ejercicio 4

    int convertirNumero(const std::string cadena);

    //----------------------------------------

    //Practica 6

    bool esMinuscula(const char *caracter);

    char aMayuscula(const char * caracter);

    void convertirCadena(std::string *cadena);

    //----------------------------------------

    //Ejercicio 8

    bool esDigito(const char *caracter);

    void separarCadena(const std::string *original, std::string *texto, std::string *numeros);

    //----------------------------------------

    //Ejercicio 10

    int valorRomano(const char *caracter);

    int convertirRomano(const std::string *romano);

    //----------------------------------------

    //Ejercicio 12

    const int MAX_N = 20;

    void leerMatriz(int *matriz, int n);

    void imprimirMatriz(const int *matriz, int n);

    int sumaFila(const int *matriz, int n, int fila);

    int sumaColumna(const int *matriz, int n, int columna);

    int sumaDiagonalPrincipal(const int *matriz, int n);

    int sumaDiagonalSecundaria(const int *matriz, int n);

    bool tieneRepetidos(const int *matriz, int n);

    bool esCuadradoMagico(const int *matriz, int n);

    //-------------------------------------------


    // Ejercicio 14

    const int N = 5;

    void llenarMatriz(int *matriz);

    void imprimirMatriz(const int *matriz);

    void rotar90(const int *origen, int *destino);

    // ---------------------------------------------


}

#endif // MILIBRERIA_H
