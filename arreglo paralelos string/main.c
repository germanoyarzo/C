#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define FILAS 3
#define COLUMNAS 20


void cargaArreglosParalelos(char arregloPalabras[][COLUMNAS], int edades[], int telefonos[], int * validos);
void mostrarString(char nombreYapellido[][COLUMNAS], int edades[], int telefonos[], int  validos);
void insertar(char nombreYapellido[][COLUMNAS],int edades[], int telefonos[], int validos, char *nombres, int datob, int datoc);
void cargarOrdenadoNombre(char nombreYapellido[][COLUMNAS], int edades[], int telefonos[], int *validos);

int main()
{
    char nombreYapellido[FILAS][COLUMNAS];
    int edades[FILAS];
    int telefonos[FILAS];
    int validos=0;
//    cargaArreglosParalelos(nombreYapellido, edades, telefonos, &validos);
//    mostrarString(nombreYapellido, edades, telefonos, validos);
    cargarOrdenadoNombre(nombreYapellido,edades, telefonos, &validos);
    mostrarString(nombreYapellido, edades, telefonos, validos);
    return 0;
}

void  cargaArreglosParalelos(char nombreYapellido[][COLUMNAS], int edades[], int telefonos[], int * validos)
{
    int i=*validos;
    char continuar= 's';

    while(i<FILAS && continuar=='s')
    {
        printf("ingrese palabra \n");
        fflush(stdin);
        gets(nombreYapellido[i]);
        printf("ingrese edad \n");
        scanf("%d", &edades[i]);
        printf("ingrese telefono \n");
        scanf("%d", &telefonos[i]);
        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);
        i++;
    }
    i=*validos;

}

void mostrarString(char nombreYapellido[][COLUMNAS], int edades[], int telefonos[], int  validos)
{
    for(int i=0; i<FILAS; i++)
    {

        printf("nombre y apellido: %s \n",nombreYapellido[i]);
        printf("edad: %d \n", edades[i]);
        printf("telefono: %d \n", telefonos[i]);

        printf("\n");
    }
}



void insertar(char nombreYapellido[][COLUMNAS],int edades[], int telefonos[], int validos, char *nombres, int datob, int datoc)
{
    int i= validos-1; //ultima pos valida
    while (i >= 0 && (strcmp(nombres,nombreYapellido[i])<0))  /// si la primera palabra es menor que la segunda devuelve -1
    {
        ///nombreYapellido[i+1] = nombreYapellido[i]; NO SE PUEDE HACER ESTO PORQUE ES UN STRING
        strcpy(nombreYapellido[i+1], nombreYapellido[i]);
        edades[i+1]= edades[i];
        telefonos[i+1]= telefonos[i];
        i--;
    }
    strcpy(nombreYapellido[i+1], nombres);
    edades[i+1] = datob;
    telefonos[i+1] = datoc;

}



void cargarOrdenadoNombre(char nombreYapellido[][COLUMNAS], int edades[], int telefonos[], int *validos)
{
    int i=*validos;
    char continuar= 's';

    char nYa[COLUMNAS];
    int edad;
    int tel;


    while(*validos<FILAS && continuar=='s')
    {
        printf("ingrese palabra \n");
        fflush(stdin);
        gets(nYa);
        printf("ingrese edad \n");
        scanf("%d", &edad);
        printf("ingrese telefono \n");
        scanf("%d", &tel);
        insertar(nombreYapellido, edades,telefonos, *validos, nYa, edad,tel);
        (*validos)++;
        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);

    }
    ///i=*validos;
}

