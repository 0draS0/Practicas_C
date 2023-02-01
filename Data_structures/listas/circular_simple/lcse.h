/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdio.h>
#include <stdlib.h>

// Esta lista trabaja principalmente con ENTEROS
typedef int TipoDato;
typedef struct nodo{
	TipoDato dato;
	struct nodo *siguiente;
}NODO;

// Funciones basicas
void insertarLCSE (NODO **cab,TipoDAto x);
void eliminarnodo(NODO **cab, TipoDato x);
NODO *busq_ele(NODO *cab, TipoDAto x);
void eliminarnodo(NODO **cab, TipoDato x);
void mostrartodalista(NODO *cab);
void copiarLSCE(NODO *cab, NODO *cab2);
void liberarLSCE(NODO **cab)
