#include <string.h>

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

#endif // FUNCIONES_H_INCLUDED
//
//1. Crear una funci�n llamada aplicarDescuento
//que reciba como par�metro el precio de un producto
// y devuelva el valor del producto con un descuento
// del 5%. Realizar la llamada desde el main.
float aplicarDescuento(float precio);

//2. Crear una funci�n que se llame contarCaracteres
//que reciba una cadena de caracteres como primer par�metro
//y un car�cter como segundo y devuelva la cantidad de veces
//que ese car�cter aparece en la cadena

int contarCaracteres(char cadena[], char caracter);

//3. Dada la estructura Notebook
//(id, procesador, marca, precio)
//generar una funci�n que permita ordenar un
//array de dicha estructura por marca.
//Ante igualdad de marca deber� ordenarse
//por precio. Hardcodear datos y mostrarlos desde el main.

int ordenarMarcaPrecio(eNotebook vec[], int tam);


