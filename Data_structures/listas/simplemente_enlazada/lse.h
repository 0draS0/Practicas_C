/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdlib.h>
#include <stdio.h>
#define TAM 100

// Esta lista trabaja principalmente con ENTEROS
typedef int TipoDato;

typedef struct nodo{
    int dato;
    TipoDato nodo;
    struct nodo *siguiente;
}NODO;

// Funciones basicas
NODO *crearNodo(NODO *enlace, TipoDato x);
void nodo_cab (NODO **cab, TipoDato x);
void mostrar_lista (NODO *cab);
void mostrar_lOrd(NODO *cab);
void insertarnodo:nocab (NODO *ant, TipoDato x);
NODO *busqueda (NODO *cab, TipoDato x);
void eliminarnodo(NODO **cab, TipoDato x);
void eliminarLSE (NODO **cab, int n);
void concatLSE(NODO **cab1, NODO **cab2);