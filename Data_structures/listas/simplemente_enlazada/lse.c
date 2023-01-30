/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdlib.h>
#include <stdio.h>
#include "lse.h"

NODO *crearNodo(NODO *enlace, TipoDato x){
    NODO *nuevo = (NODO *) malloc(sizeof(NODO));
        nuevo->dato = x;
        nuevo->siguiente = enlace;
        return nuevo;
}

void nodo_cab (NODO **cab, TipoDato x){
    NODO *nuevo = crearNodo(nuevo, x);
    nuevo->siguiente = *cab;
    *cab = nuevo;
}

void mostrar_lista (NODO *cab){
    NODO *val = cab;
    for( ; val; val->siguiente){
        printf("%d", val->dato);
    }
}

void mostrar_lOrd(NODO *cab){
    if(!cab){
        mostrar_lOrd(cab->siguiente);
        printf("%d", cab->dato);
    }
}

void insertarnodo:nocab (NODO *ant, TipoDato x){
    NODO *nuevo = crearNodo(nuevo, x);
    ant->siguiente =nuevo;
    //aplicable para colas
    //ant->ant = nuevo;
}

NODO *busqueda (NODO *cab, TipoDato x){
    NODO *aux = cab;
    for( ; aux; aux = aux->siguiente){
        if(aux->dato == x){
            return aux;
        }
    }
    return aux;
}

void eliminarnodo(NODO **cab, TipoDato x){
	NODO * ant = NULL, *actual = *cab;
	int encontrado = 0;
	while(!encontrado && actual){
		encontrado= (actual->dato == x);
		if(!encontrado){
			ant=actual;
			actual = actual->siguiente;
		}
	}
	if(actual != NULL){
		*cab = actual->siguiente;}
	else{
		ant->siguiente=actual->siguiente;
		free(actual);
	}
}

void eliminarLSE (NODO **cab, int n){
int i= 0;
NODO aux= *cab;
	while(aux){
		if(i == n){
			eliminarLSE(cab, aux->dato);
		}
	i++;
	aux = aux->siguiente;
	}
}

void concatLSE(NODO **cab1, NODO **cab2){
NODO *aux= *cab;
	if(!*cab == NULL && !*cab2== NULL){
		while(aux->siguiente){
			aux=aux->siguiente;
		}
	aux->siguiente =*cab2;
}