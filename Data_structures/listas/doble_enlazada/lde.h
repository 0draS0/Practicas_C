/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdlib.h>
#include <stdio.h>


void insertarLDE(NODO **cab, TipoDato x);
void insertar_nocab (NODO *ant, TipoDato x);
NODO *busq_ele (NODO *cab, TipoDato x);
void eliminarnodo(NODO **cab, TipoDato x);
void mostrarLDE(NODO *cab);
void eliminarLDE(NODO **cab);
void diferencia(NODO *cab);