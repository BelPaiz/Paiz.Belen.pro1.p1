#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 2

int main()
{
    eNotebook note[TAM] = {{1000, "corei5", "samsumg", 123.65}, {1001, "corei3", "phillips", 144.83}};

    printf("%.2f\n",aplicarDescuento(125.30));
    printf("%d\n", contarCaracteres("mandala", 'a'));
    ordenarMarcaPrecio(note, TAM);
    for(int i=0; i<TAM; i++)
    {
        printf("%d      %s      %s      %f\n", note[i].id, note[i].procesador, note[i].marca, note[i].precio);
    }


    return 0;
}
