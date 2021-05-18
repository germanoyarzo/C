#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()
{
//    Pila origen;
//    Pila aux;
//    Pila aux2;
//    inicpila(&origen);
//    inicpila(&aux);
//    inicpila(&aux2);
//    3
//    int i=0;
//    char continuar='s';
//    ///6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden.
//
//        do
//        {
//            leer(&origen);
//            printf("Desea continuar? s/n \n ");
//            fflush(stdin);
//            scanf("%c", &continuar);
//
//
//        }while (continuar=='s');
//        printf("Origen");
//        mostrar(&origen);
//
//
//        apilar(&aux, desapilar(&origen));
//        mostrar(&origen);
//
//        while(!pilavacia(&origen))
//        {
//            apilar(&aux2, desapilar(&origen));
//        }
//        apilar(&origen, desapilar(&aux));
//        while(!pilavacia(&aux2))
//            {
//
//            apilar(&origen, desapilar(&aux2));
//
//        }
////
//        mostrar(&origen);

        /// CARGAR RANDOM
        // int numero;
        // srand(time(NULL));
        // numero=rand()%10; /// da un numero entre 0 y 9
        // printf("%i", numero);
        // int cantidad= rand() %51; /// para apilar en la pila
        //
        // for(int i=0; i< cantidad; i++ )
        // {
        //     apilar(&origen, rand()% 10);/// carga con la pila del 0 al 9
        // }
        // mostrar(&origen);

            ///9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
//           Pila A, B, aux1, aux2;
//           inicpila(&A);
//           inicpila(&B);
//           inicpila(&aux1);
//           inicpila(&aux2);
//            char continuar='s';
//            int i=0;
//            int contador=0;
////
//
//            do
//            {
//                printf("A \n");
//                leer(&A);
//                printf("Desea continuar=? s/n \n");
//                fflush(stdin);
//                scanf("%c", &continuar);
//            }while(continuar=='s');
//            mostrar(&A);
//
//             do
//            {
//                printf("B \n");
//                leer(&B);
//                printf("Desea continuar=? s/n \n");
//                fflush(stdin);
//                scanf("%c", &continuar);
//            }while(continuar=='s');
//            mostrar(&B);
//
//
//            while(!pilavacia(&A))
//            {
//                apilar(&aux1, desapilar(&A));
//                i++;
//
//            }
//            printf("La cantidad de elementos de A es: %i", i);
//
//            while(!pilavacia(&B)){
//
//                apilar(&aux2, desapilar(&B));
//                contador++;
//            }
//            printf("La cantidad de elementos de B es: %i \n", contador);
//
//            if(i>contador)
//            {
//                printf("La pila A tiene mas elementos que B \n");
//            }else if(i==contador)
//            {
//                 printf("Las pilas tienen la misma cantidad de elementos \n");
//            }else
//            {
//                 printf("La pila B tiene mas elementos que A \n");
//            }
           /// 11 -Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2) dejando el resultado en una pila también ordenada en forma creciente (ORDENADAFINAL).
//    Pila ordenada1, ordenada2, ordenadaFinal;
//    inicpila(&ordenada1);
//    inicpila(&ordenada2);
//    inicpila(&ordenadaFinal);
//
//
//    apilar(&ordenada1,1);
//    apilar(&ordenada1,3);
//    apilar(&ordenada1,5);
//    apilar(&ordenada1,7);
//    printf("ORD 1 \n");
//    mostrar(&ordenada1);
//
//    apilar(&ordenada2,0);
//    apilar(&ordenada2,2);
//    apilar(&ordenada2,4);
//    apilar(&ordenada2,6);
//    printf("ORD 2 \n");
//    mostrar(&ordenada2);
//
//    while(!pilavacia(&ordenada1) && !pilavacia(&ordenada2))
//    {
//        if(tope(&ordenada1) >= tope(&ordenada2))
//        {
//            apilar(&ordenadaFinal,desapilar(&ordenada1));
//            apilar(&ordenadaFinal, desapilar(&ordenada2));
//        }
//        else /// si ordenada1 < ordenada 2
//        {
//            apilar(&ordenadaFinal, desapilar(&ordenada2));
//            apilar(&ordenadaFinal, desapilar(&ordenada1));
//        }
//
//
//    }
//    printf("ORDENADA FINAL  \n");
//    mostrar(&ordenadaFinal);
//

           /// 12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
            ///elementos que existan en MODELO.
//
//            Pila modelo, dada, aux, auxModelo, descarte;
//            inicpila(&dada);
//            inicpila(&modelo);
//            inicpila(&aux);
//            inicpila(&auxModelo);
//            inicpila(&descarte);
//            char continuar='s';
////            int descarte=0;
//
//            apilar(&modelo, 5);
//            apilar(&modelo, 3);
//            apilar(&modelo, 7);
//            printf("Modelo \n");
//            mostrar(&modelo);
//
//
//
//
//            do
//            {
//                leer(&dada);
//                printf("Desea continuar ? s/n \n");
//                fflush(stdin);
//                scanf("%c", &continuar);
//            }while(continuar=='s');
//            printf("DADA \n");
//            mostrar(&dada);
//
//    while(!pilavacia(&dada))
//    {
//        if(tope(&dada)== tope(&modelo))
//        {
//            apilar(&descarte, desapilar(&dada));
//        }
//        else
//        {
//
//            apilar(&aux, desapilar(&dada));
//
//
//        }
//
//    }
//    while(!pilavacia(&modelo))
//    {
//        apilar(&auxModelo, desapilar(&modelo));
//    }
//
//    while(!pilavacia(&aux))
//    {
//
//            apilar(&dada, desapilar(&aux));
//        }
//
//    while(!pilavacia(&dada))
//    {
//
//            apilar(&aux, desapilar(&dada));
//
//
//    }
//    printf("DADA FINALLLLLLL\n");
//    mostrar(&dada);
//    printf("Modelo \n");
//    mostrar(&modelo);
//
//    printf("aux \n");
//    mostrar(&aux);
//
//    printf("auxModelo\n");
//    mostrar(&auxModelo);



    return 0;
}
