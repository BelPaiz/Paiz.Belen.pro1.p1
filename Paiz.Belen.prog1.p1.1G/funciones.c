#include "funciones.h"

//1

float aplicarDescuento(float precio)
{
    float precioConDescuento;
    float porcentaje = 0.05;
    float descuento;

    descuento = precio * porcentaje;
    precioConDescuento = precio - descuento;

    return precioConDescuento;

}

//2

int contarCaracteres(char cadena[], char caracter)
{
    int contadorCaracter = 0;

    for(int i=0; i< strlen(cadena); i++)
    {
        if(cadena[i] == caracter)
        {
            contadorCaracter++;
        }
    }
    return contadorCaracter;
}

int ordenarMarcaPrecio(eNotebook vec[], int tam)
{
    int todoOk = 0;

    eNotebook auxNot;

    if( vec != NULL && tam > 0)
    {
        for(int i=0; i < tam - 1; i++)
        {
            for(int j= i+1; j < tam; j++)
            {
                if((strcmp(vec[i].marca,vec[j].marca) > 0)
                        ||((strcmp(vec[i].marca,vec[j].marca) == 0) && (vec[i].precio != vec[j].precio) && (vec[i].precio > vec[j].precio)))
                {
                    auxNot = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxNot;
                }
            }
        }
    }

    return todoOk = 1;
}
