#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


void pasarArreglo(char arreglo [], Pila * origen);
int cargarArreglo(int arreglo[], int dimension);
void mostrarArreglo(int arreglo[], int cantValido);
int sumaArreglo(int arreglo[], int cantValidos);
void pasarArreglo2Pila(int arreglo[], int validos, Pila * origen);
int buscar(int arreglo[], int validos);
void insertar(int arreglo[], int validos, int num);
void ordenacionInsercion(int a[ ], int cantVal);int posicionMenor (int A[], int pos, int c);
int posicionMenor (int A[], int pos, int c);
void ordenacionSeleccion (int A[], int c);


#define cantMAx 100
int main()
{
   Pila origen;
   inicpila(&origen);
   /// pasar todos los elementos desde z hasta h inclusive
//   char arreglo[cantMAx]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//   pasarArreglo(arreglo, &origen);
    int arreglo[cantMAx];
    int validos;

    validos=cargarArreglo(arreglo, cantMAx);
    mostrarArreglo(arreglo, validos);
//    printf("\n Suma: %i \n", sumaArreglo(arreglo, validos));




    ///6. Realizar una función que indique si un elemento dado se encuentra en un arreglo decaracteres.
//    int num=0;
//    num=buscar(arreglo, validos);

    ///7. Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden.
    int elemento;
    printf("Ingrese el numero a insertar \n");
    scanf("%d", &elemento);
    insertar(arreglo, validos, elemento);
    ordenacionInsercion(arreglo,validos);
    mostrarArreglo(arreglo,validos);

//    ordenacionSeleccion(arreglo, validos);
//    printf("Arreglo ordenado por Seleccion \n");
//    mostrarArreglo(arreglo, validos);







    return 0;
}

void pasarArreglo(char arreglo [], Pila * origen)
{
   int i;

    for(i<cantMAx-1; arreglo[i]!= 'h';i--)
    {
        apilar(origen, arreglo[i]);

    }
}


///1. Hacer una función que reciba como parámetro un arreglo de números enteros y permita que
///el usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de
///elementos cargados en el arreglo (o pueden utilizar como puntero válidos).

int cargarArreglo(int arreglo[], int dimension)
{
    int i=0;
    char continuar='s';

    while(continuar == 's' && i<dimension)
    {
        printf("Ingrese un numero \n");
        scanf("%i", &arreglo[i]);
        i++;
        printf("Continuar? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);


    }

    return i;
}


///2. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
///cargados en él y los muestre por pantalla
void mostrarArreglo(int arreglo[], int cantValido)
{
    for(int i=0; i<cantValido; i++)
    {
        printf("|%i| ", arreglo[i]);

    }
    printf("\n");

}

///3. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
///cargados en él y calcule la suma de sus elementos
int sumaArreglo(int arreglo[], int cantValidos)
{

    int suma=0;

    for(int i=0;i<cantValidos; i++)
    {
        suma=suma+arreglo[i];
    }
    return suma;
}

///4. Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos)
///cargados en él y una Pila. La función debe copiar los elementos del arreglo en la pila.

void pasarArreglo2Pila(int arreglo[], int validos, Pila *origen)
{

    for(int i=0; i<validos; i++)
    {
        apilar(origen, arreglo[i]);
    }
}

/// 6. Realizar una función que indique si un elemento dado se encuentra en un arreglo de enteros.

int buscar(int arreglo[], int validos)
{
    int i=0;
    int num=0;
    printf("ingrese un numero a buscar \n");
    scanf("%i", &num);
    while(i<validos && num!= arreglo[i])
    {
        i++;
    }
    if(i<validos)
    {
        printf("lo encontraste  en la posicion %i\n", i);

    }else
    {
        printf("no lo encontraste \n");
    }
    return num;
}

///7. Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden.
void insertar(int arreglo[], int validos, int num)
{
    int i=validos;
    while(i>=0 && num< arreglo[i])
    {
        arreglo[i+1]=arreglo[i];
        i--;

    }
    arreglo[i+1]=num;


}

void ordenacionInsercion(int a[ ], int cantVal)
{
    int u=0;
    while (u < cantVal - 1){
     //llega hasta la posición del anteúltimo elemento del arreglo.
        insertar(a, u, a[u+1]);
        u++;
    }
}


///ORDENAMIENTO POR SEELECCION

int posicionMenor (int A[], int pos, int c)
{

    int menor = A[pos];
    int posmenor = pos;
    int i = pos +1;
    while (i<c)
    {
        if (menor > A[i])
        {
            menor = A[i];
            posmenor = i;
        }
        i++;
    }
    return posmenor;
}

void ordenacionSeleccion (int A[], int c)
{
    int posmenor;
    int aux;
    int i = 0;
    while (i<c-1)
    {
        posmenor = posicionMenor(A,i,c);
        aux = A[posmenor];
        A[posmenor]=A[i];
        A[i]= aux;
        i++;
    }
}
