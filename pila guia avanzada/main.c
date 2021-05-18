#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()

{
       /// 2 Contar los elementos de una pila (usar variables)

//            while(!pilavacia(&destino))
//            {
//                apilar(&origen,desapilar(&destino));
//                i++;
//            }
//            printf("La cantidad de elementos es de: %i", i);

    ///4. Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables, solo pilas)
//    Pila origen, aux, menor;
//    inicpila(&origen);
//    inicpila(&aux);
//    inicpila(&menor);
//
//    apilar(&origen, 1);
//    apilar(&origen, 2);
//    apilar(&origen, 4);
//    apilar(&origen, 5);
//    apilar(&origen, 6);
//    mostrar(&origen);
//
//    apilar(&menor,3);
//    mostrar(&menor);
//
//    while(!pilavacia(&origen) )
//    {
//        if(tope(&origen)<= tope(&menor))
//        {
//            apilar(&aux, desapilar(&menor));
//            apilar(&menor,desapilar(&origen));
//        }
//        else
//        {
//            apilar(&aux, desapilar(&origen));
//        }
//
//    }
//    printf("menor \n");
//    mostrar(&menor);
//
// ///--------------------ORDENAMIENTO POR SELECCION------------------------------------------------------------------------------
//    ///BUSCA EL MENOR ELEMENTO (ejercicio 4), LUEGO BUSCA EL SEGUNDO Y ASI VA COMPARANDO LOS TOPES DE LAS PILAS
//
//    /// en una pila ordenada se busca con un while(!Pila vacia && tope pila > num)
//
//    ///6. Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal
//    ///que se conserve el orden. (sin variables, solo pilas)
//
//    ////proceso de apilar el dato seleccionado
//    apilar(&origen, desapilar(&menor));
//    while(!pilavacia(&aux))
//    {
//        apilar(&origen, desapilar(&aux));
//    }
//
//    printf("ORIGEN ORDENADA \n");
//    mostrar(&origen);



 ///--------------------ORDENAMIENTO POR INSERCION-----------------------------------------------------------------------------
  ///buscar un hueco para insertar (insercion). Se encuentra ordenada la pila. se compara con todos los elementos ya ordenados, deteniéndose cuando se encuentra un elemento menor



   /// 5. Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal
   ///que se conserve el orden. (sin variables, solo pilas)

//   Pila origen, aux, dato;
//   inicpila(&origen);
//   inicpila(&aux);
//   inicpila(&dato);
//
//   apilar(&origen,5);
//   apilar(&origen,4);
//   apilar(&origen,2);
//   apilar(&origen,1);
//   mostrar(&origen);
//
//   apilar(&dato,3);
//    while(!pilavacia(&origen) && (tope(&origen)< tope(&dato)))
//    {
//
//        apilar(&aux, desapilar(&origen));
//
//    }
//  /// inserto el dato una vez encontrado el hueco. Lo apilamos en la pila origen, y luego pasamos los datos de aux
//    apilar(&origen, desapilar(&dato));
//
//      while(!pilavacia(&aux))
//        {
//            apilar(&origen, desapilar(&aux));
//        }
//
//
//
//
//        printf("ORIGEN \n");
//        mostrar(&origen);



        ///12. Dada la pila ORIGEN ordenarla en forma ascendente por método de inserción dejando el
        ///resultado en la pila ORIGEN. Para este ejercicio usar lo aprendido para el ejercicio 5.





        /// -------PILA DESORDENADA
        /// buscar un valor

        Pila origen, aux, num, aux2;
        inicpila(&origen);
        inicpila(&aux);
        inicpila(&num);
        inicpila(&aux2);


        apilar(&origen, 5);
        apilar(&origen, 1);
        apilar(&origen, 3);
        apilar(&origen, 4);


        mostrar(&origen);


        printf("ingrese un valor a buscar \n");
        scanf("%d", &num);


        while(!pilavacia(&origen) && (tope(&origen) != num))
        {
            apilar()
        ///encontro el menor
        while((!pilavacia(&menor)))
       apilar(&aux2, desapilar(&menor));

        while(!pilavacia(&aux))
        {
            apilar(&menor, desapilar(&aux));
            if(tope(&menor)> tope(&aux))
            {
                apilar(&aux2, desapilar(&menor));
                apilar(&menor,desapilar(&aux));
            }else
            {
                apilar(&aux2, desapilar(&aux));
            }
        }
        while(!pilavacia)


        /// pasamos la auxiliar2 a la origen
        while(!pilavacia(&aux2))
        {
            apilar(&origen, desapilar(&aux2));
        }

        printf("Origen ordenada \n");
        mostrar(&origen);
        mostrar(&menor);








//    /9. Verificar si una pila DADA es capicúa.
//    Pila origen, copia, aux2, auxCopia;
//    inicpila(&origen);
//    inicpila(&copia);
//    inicpila(&aux2);
//    inicpila(&auxCopia);
//    int num=0;
//
//    apilar(&origen,2);
//    apilar(&origen,0);
//    apilar(&origen,1);
//    apilar(&origen,2);
//    mostrar(&origen);
//
//    while(!pilavacia(&origen))
//    {
//        num=tope(&origen);
//        apilar(&copia, num);/// copio el tope y lo pongo en una pila auxiliar llamada COPIA
//        apilar(&aux2, desapilar(&origen)); /// desapilo en una pila auxiliar la pila Origen
//    }
//    while(!pilavacia(&aux2))
//    {
//        apilar(&origen, desapilar(&aux2));
//
//    }
//    while(!pilavacia(&origen) && (!pilavacia(&copia)) && (tope(&origen)==tope(&copia)))
//    {
//        apilar(&aux2, desapilar(&origen));
//        apilar(&auxCopia, desapilar(&copia));
//    }
//    if(pilavacia(&origen) && pilavacia(&copia))
//    {
//        printf(" La pila ES capicua \n");
//    }
//    else
//    {
//        printf("La pila NO es capicua \n");
//
//
//    }
//



    return 0;
}
