#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int cargarArregloParalelos(float notasParcial1[], float notasParcial2[], int dnis[], int dimension);
int buscarDni(int dnis[], int dato, int validos);
void mostrarArregloParalelo(float notasParcial1[], float notasParcial2[],  int pos, int validos);
void mostrarDni(float notasParcial1[], float notasParcial2[], int dnis[], int validos);
void promedioNotaDni(float notaParcial1[], float notaParcial2[], int dnis[], int validos);
void mostrarAprobadosDni(float notasParcial1[], float notasParcial2[], int dnis[], int validos);
void promedioAprobadosDni(float notasParcial[], float notasParcial2[], int dnis[], int validos);
int maximaNotaPrimerParcial( int notasParcial1[],int dnis[], int validos);
void mostrarPromedioTotal(float notasParcial1[], float notasParcial2[], int validos);
int cuentaNotas(float notasParcial[], float notasParcial2[], int validos);
void pasarPilaPromedio(float notasParcial1[], float notasParcial2[], int dnis[], int validos, Pila * origen);
int cantidadDatosPila(Pila dnis);



int main()
{
    float notasParcial1[20];
    float notasParcial2[20];
    int dnis[20];

    int validos=0;
    int pos=0;
    int dni;
    Pila origen;
    inicpila(&origen);

    validos=cargarArregloParalelos(notasParcial1, notasParcial2, dnis, 20);
//
//    printf("Ingrese un dni a buscar \n");
//    fflush(stdin);
//    pos=buscarDni(dnis, dni,validos);
//    if(pos!= -1)
//    {
//       mostrarArregloParalelo(notasParcial1, notasParcial2,pos, validos);
//    }else
//    {
//        printf("No se encontro el dni \n");
//    }

    int mayor;
//    pos=buscarDni(dnis, dni, validos);
//    mostrarAprobadosDni(notasParcial1, notasParcial2, dnis, validos);
//    promedioNotaDni(notasParcial1, notasParcial2, dnis, validos);
//    promedioAprobadosDni(notasParcial1, notasParcial2, dnis, validos);
//    mayor=maximaNotaPrimerParcial(notasParcial1,dnis,validos);
//    printf("El dni %d obtuvo la maxima nota del primer parcial \n",mayor );
///   mostrarPromedioTotal(notasParcial1,notasParcial2,validos);
    pasarPilaPromedio(notasParcial1,notasParcial2, dnis, validos, &origen);
    printf("PILA \n");
    mostrar(&origen);

   printf("CAntidad de datos Pila dni %d \n ", cantidadDatosPila(origen));


    return 0;
}


///1. Crear una función que los cargue, hasta que el usuario lo decida.

int cargarArregloParalelos(float notasParcial1[], float notasParcial2[], int dnis[], int dimension)
{
    int i=0;
    char continuar ='s';

    do
    {
        printf("Ingrese una nota \n");
        scanf("%f", &notasParcial1[i]);

        printf("Nota 2 \n");
        scanf("%f", &notasParcial2[i]);

        printf("dni \n");
        scanf("%d", &dnis[i]);

        printf("Continuar ? \n");
        fflush(stdin);
        scanf("%c", &continuar);

        i++;

    }
    while(continuar=='s' && i<dimension);

    return i;

}

///2. Crear una función que busque dentro del arreglo de dnis un dni determinado y
/// retorne la posición ( Si no se encuentra retornar -1).

int buscarDni(int dnis[], int dato, int validos)
{
    int i=0;
    int pos=-1;

    while(i<validos && dnis!= dato){

        i++;
    }
    if(i<validos)/// si encontro el dato
    {
        pos=i;/// igualamos la variable creada al indice que contiene el dato
    }

    return pos;

}


///3. Hacer una función que muestre las notas del primer y segundo parcial, recibiendo como parámetro la posición

void mostrarArregloParalelo(float notasParcial1[], float notasParcial2[], int pos, int validos)
{
    int i=pos;
    for(i=0; i<validos; i++)
    {
        printf("parcial 1: %f \n", notasParcial1[i]);
        printf("parcial 2: %f \n", notasParcial2[i]);


    }


}


///4. Hacer una función que muestre cada dni y un mensaje “DESAPROBADO” para
///aquellos que desaprobaron solo un parcial (nota menor a 6) y para aquellos que
///desaprobaron ambos debe mostrar la palabra “RECURSA”.
void mostrarAprobadosDni(float notasParcial1[], float notasParcial2[], int dnis[], int validos)
{
    for(int i=0; i<validos; i++)
    {
          if(notasParcial1[i]>= 6 && notasParcial2[i]>=6)
          {
            printf("DNI: %d \n", dnis[i]);
            printf("Alumno Aprobado \n");
          }else if(notasParcial1[i]<= 6 || notasParcial2[i]<=6 )
          {
              printf("dni %d NO aprobado \n", dnis[i]);
              if(notasParcial1[i]<= 6 && notasParcial2[i]<=6 )
            {
                printf("RECURSA \n");
            }
          }

    }
}

void mostrarDni(float notasParcial1[], float notasParcial2[], int dnis[], int validos)
{



     for(int i=0; i<validos; i++)
     {


        if(notasParcial1[i]<= 6 || notasParcial2[i]<=6 )
        {
            printf("DNI: %d \n", dnis[i]);
            printf("Alumno Deaprobado \n");
        }
        else if (notasParcial1[i]<= 6 && notasParcial2[i]<=6)
        {
           printf("DNI: %d \n", dnis[i]);
            printf("Alumno Recursa \n");

        }
        else
        {
            printf("DNI: %d \n", dnis[i]);
            printf("Alumno Aprobado \n");
        }
     }


}

///5. Hacer una función que muestre la nota promedio de cada dni.
void promedioNotaDni(float notaParcial1[], float notaParcial2[], int dnis[], int validos)
{
    float prom;


    for(int i=0; i<validos; i++)
    {
        prom=(notaParcial1[i]+notaParcial2[i])/2;
        printf("Promedio del dni %d es: %f \n", dnis[i], prom);
    }

}


///6. Hacer una función que muestre todos los dni que aprobaron la materia. Se aprueba
///con un promedio de 6.
void promedioAprobadosDni(float notasParcial1[], float notasParcial2[], int dnis[], int validos)
{
 float prom;


 for(int i=0; i<validos; i++)
 {
     prom=(notasParcial1[i]+ notasParcial2[i])/2;
     if(prom>=6)
     {
         printf("El alumno con dni %d ha aprobado la materia \n", dnis[i]);
     }
     else
     {
         printf("El alumno no ha aprobado \n");
     }

 }
}

///7. Hacer una función que busque la máxima nota obtenida en el primer parcial y
///retorne la posición, luego en el main informar el dni que obtuvo esa máxima nota.
int maximaNotaPrimerParcial( int notasParcial1[],int dnis[], int validos)
{
//    int mayor=0;
//
//    int i= validos -1;
//    mayor=notasParcial1[i];
//
//    while(i>=0)
//    {
//        if (mayor< notasParcial1[i-1])  //SI LA VARIABLE ES MENOR AL CARACTER DE LA POSICION ANTERIOR, IGUALAMOS ESE VALOR A NUESTRA VARIABLE.
//        {
//            mayor= notasParcial1[i-1];
//        }
//        i--;
//    }
//    mayor= dnis[i];
//    return mayor;
}


///9. Hacer una función que muestre la nota promedio total.

int cuentaNotas(float notasParcial[], float notasParcial2[], int validos)
{
  int i=0;
  while(i<validos)
  {
      i++;
  }
  return i;
}

//void mostrarPromedioTotal(float notasParcial1[], float notasParcial2[], int validos)
//{
//    float prom;
//    float total;
//    int contador=0;
//    for(int i=0; i<validos; i++)
//    {
//        prom=((notasParcial1[i]+ notasParcial2[i])/2);
//
//        total=(float)(prom/(float)(cuentaNotas(notasParcial1, notasParcial2,validos)*2));
//
//    }
//    printf("La nota promedio de todos los alumnos es: %f \n",total);
//}

///10. Hacer una función que pase a una pila aquellos DNIS que obtuvieron un promedio mayor a 7.
void pasarPilaPromedio(float notasParcial1[], float notasParcial2[], int dnis[], int validos, Pila * origen)
{
    float prom;



    for(int i=0; i<validos; i++)
    {
        prom=(notasParcial1[i]+ notasParcial2[i])/2;
        if(prom>7)
        {
            apilar(origen, dnis[i]);
        }
    }
}


///11. Hacer una función que reciba la pila de DNIS y retorne la cantidad de datos almacenada.

int cantidadDatosPila(Pila dnis)
{
    int i=0;
    Pila aux;
    inicpila(&aux);
  while(!pilavacia(&dnis))
  {
      apilar(&aux, desapilar(&dnis));
      i++;
  }
  while(!pilavacia(&aux))
  {
      apilar(&dnis, desapilar(&aux));
  }
  return i;
}
