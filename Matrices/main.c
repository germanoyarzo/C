#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define FILAS 20
#define COLUMNAS 30
#define FILAS2x2 2
#define COLUMNAS2x2 2


void  cargarMatriz(int matriz[][COLUMNAS]);
void cargarMatrizAleatora(int matriz[][COLUMNAS]); /// carga random
void cargarMatrizXColumnas(int matriz[][FILAS]);
void cargarMatrizInversa(int matriz[][COLUMNAS]);
void cargarDiagonalPrincipal(int matriz[][COLUMNAS]);
void mostrarMatriz(int matriz[][COLUMNAS]);
int sumaMatriz(int matriz[][COLUMNAS]);
float promedioMatriz(int matriz[][COLUMNAS]);
void buscarDato(int matriz[][COLUMNAS], int dato);
int cantidadPalabras(char matriz [][COLUMNAS]);
int cargarStrings(char arregloStrings[][COLUMNAS]);
void mostrarString(char arregloStrings[][COLUMNAS], int validos);
void buscarString(char arregloString[][COLUMNAS], char palabra[], int validos);
int calcularDeterminante(int matriz[][COLUMNAS2x2]);


int main()
{
    int matriz[FILAS][COLUMNAS];
   char arregloStrings[FILAS][COLUMNAS];
    int validos=0;
    int matriz2x2[FILAS2x2][COLUMNAS2x2];

//      cargarMatriz(matriz);
////    ///cargarMatrizAleatora(matriz);
//    mostrarMatriz(matriz);
//    printf("La suma es : %d \n", sumaMatriz(matriz));
//    printf("el promedio es: %f \n", promedioMatriz(matriz));
//    buscarDato(matriz, 3);
    //printf("La cantidad de palabras cargadas es de: %d \n", cantidadPalabras(matrizChar));
//     for(int i=0; i<3; i++)
//    {
//
//
//        printf("ingrese una palabra\n");
//        fflush(stdin);
//        gets(arregloStrings[i]);
//
//    }
//     for(int i=0; i<3; i++)
//    {
//        printf("%s \n", arregloStrings[i]);
//
//        printf("\n");
//    }
    validos=cargarStrings(arregloStrings);
    mostrarString(arregloStrings, validos);
    buscarString(arregloStrings,"hola", validos);
//    printf("el determinante de la matriz 2x2 es: %d \n", calcularDeterminante(matriz));


    return 0;
}


///1. Hacer una función que reciba como parámetro una matriz de números enteros y permita que
///el usuario ingrese valores al mismo por teclado. La función debe cargar la matriz por completo.

/// SE CARGA PRIMERO LAS FILAS

void cargarMatriz(int matriz[][COLUMNAS])
{
    for(int i=0; i< FILAS; i++ )
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            printf("Ingrese un dato \n");
            scanf("%d", &matriz[i][j]);
        }
    }

}

///CARGAR PRIMERO LAS COLUMNAS

void cargarMatrizXColumnas(int matriz[][FILAS])
{
    for(int j=0; j<COLUMNAS; j++ )
    {
        for(int i=0; i<FILAS; i++)
        {
            printf("Ingrese un dato \n");
            scanf("%d", &matriz[i][j]);
        }
    }
}

///CARGAR MATRIZ INVERSA POR FILAS
void cargarMatrizInversa(int matriz[][COLUMNAS])
{
    for(int i=FILAS-1; i>=0; i--)
    {
        for(int j=COLUMNAS-1; j>=0; j--)
        {
            printf("Ingrese un numero \n");
            scanf("%d", &matriz[i][j]);
        }
    }
}


///CARGAR MATRIZ INVERSA POR COLUMNAS
void cargarMatrizInversaColumna(int matriz[][FILAS])
{
    for(int j=COLUMNAS-1; j>=0; j--)/// me paro en la ultima posicion

    {
        for(int i=FILAS-1; i>=0; i--)
        {
            printf("Ingrese un numero \n");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void cargarDiagonalPrincipal(int matriz[][COLUMNAS])
{
    for(int i=0; i<FILAS; i++)
    {
        matriz[i][i]=1; /// cargo la matriz con el numero 1;
    }
}


///2. Hacer una función que reciba como parámetro una matriz de números enteros y la muestre por pantalla (en formato matricial).

void mostrarMatriz(int matriz[][COLUMNAS])
{
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }
}

///3. Hacer una función que reciba como parámetro una matriz de números enteros y que cargue
///la misma con números aleatorios (sin intervención del usuario). La función debe cargar la matriz por completo.

void cargarMatrizAleatora(int matriz[][COLUMNAS])
{
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            matriz[i][j]=rand()%31;
        }
    }
}

///4. Hacer una función tipo int que sume el contenido total de una matriz de números enteros.

int sumaMatriz(int matriz[][COLUMNAS])
{
    int suma=0;
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            suma= suma+matriz[i][j];
        }
    }
    return suma;
}


///5. Hacer una función tipo float que calcule el promedio de una matriz de números enteros.
float promedioMatriz(int matriz[][COLUMNAS])
{
    float prom=0;
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            prom=(float) sumaMatriz(matriz)/matriz[i][j];
        }
    }
    return prom;
}

///6. Hacer una función que determine si un elemento se encuentra dentro de una matriz de
///números enteros. La función recibe la matriz y el dato a buscar.

void buscarDato(int matriz[][COLUMNAS], int dato)
{
    int flag =0;
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            if(matriz[i][j]== dato)
            {
                flag=1;
            }

        }
    }
    if(flag==1)
    {
        printf(" encontraste el dato %d\n", dato);
    }
    else
    {
        printf("no existe el dato %d \n", dato);
    }

}

///7. Hacer una función que cargue un arreglo de palabras (strings). La función debe retornar cuantas palabras se cargaron.
int cantidadPalabras(char matriz [][COLUMNAS])
{
    int i=0;
    char continuar='s';
    while(i<FILAS)
    {
        printf("Ingrese un caracter \n");
        fflush(stdin);
        scanf("%c", &matriz[i]);
        printf("Continuar ? \n");
        fflush(stdin);
        scanf("%c", &continuar);
        i++;
    }
    return i;
    }

/// CARGAR ARREGLO DE STRINGS
int cargarStrings(char arregloStrings[][COLUMNAS])
{
    int i=0;
    char continuar='s';
    while(i<FILAS && continuar=='s')
    {


            printf("ingrese una palabra\n");
            fflush(stdin);
           gets(arregloStrings[i]);
           printf("Continuar ? s/n \n");
           fflush(stdin);
           scanf("%c", &continuar);
           i++;

    }


    return i;
}

///8. Hacer una función que muestre un arreglo de palabras.
void mostrarString(char arregloStrings[][COLUMNAS], int validos)
{
    for(int i=0; i<validos; i++)
    {

        printf("%s \n", arregloStrings[i]);

        printf("\n");
    }
}

///9. Hacer una función que determine si una palabra se encuentra dentro de un arreglo de
///palabras. La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.

    void buscarString(char arregloString[][COLUMNAS], char palabra[], int validos)
    {

        int i=0;
        while(i<validos && (strcmp(arregloString[i], palabra))!=0)
        {
            i++;
        }
        if(i<validos)
        {
             printf("Encontraste la palabra  \n");
        }
        else
        {
            printf("NO LO ENCONTRASTE \n");
        }


    }

///11. Hacer una función que retorne el determinante de una matriz de 2x2.
int calcularDeterminante(int matriz[][COLUMNAS2x2])
{
    int determinante=0;
    int i=0;
    int j=0;

    determinante= ((matriz[i][j]*(matriz[i+1][j+1]))-(matriz[i+1][j]*(matriz[i][j+1])));


     return determinante;

}

