/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdlib.h>
#include <stdio.h>
#include "lde.h"

void insertarLDE(NODO **cab, TipoDato x){
NODO *nuevo = (NODO *) alloc(sizeof(NODO));
	nuevo->dato=x;
	nuevo->siguiente = NULL;
	if(*cab)
		(*cab)->ant = nuevo;
	*cab = nuevo;
}

void insertar_nocab (NODO *ant, TipoDato x){
NODO *nuevo = (NODO *) malloc(sizeof(NODO));
	nuevo->dato=x;
	nuevo->siguiente->anterior= nuevo;
	nuevo->ant = ant;
	ant->siguiente = nuevo;
}

NODO *busq_ele (NODO *cab, TipoDato x){
	if(cab && cab->dato !=x){
		return busq_ele(cab->siguiente,x);
	}
	else{
		return cab;
	}
}

void eliminarnodo(NODO **cab, TipoDato x){
NODO *actual = busq_ele(*cab,x);
	if(actual != NULL){
		if(actual == *cab){
			*cab = actual->siguiente;
			if(actual->siguiente != NULL){
				actual->siguiente->ant=NULL;
			}
			else if (actual->siguiente!=NULL){
				actual->ant->siguiente= actual->siguiente;
				actual->siguiente->ant= actual->ant;
			}
		else{
			actual->ant->siguiente=NULL;
			free(actual);
		}
		}
	}
}

void mostrarLDE(NODO *cab){
	while(cab){
		printf("%d",cab->dato);
		cab= cab->siguiente;
	}
}

void eliminarLDE(NODO **cab){
	while(*cab){
		eliminarnodo(cab, (cab->dato));
	}
}

void diferencia(NODO *cab){
NODO *aux = cab, *aux1= cab->siguiente;
	while(aux1){
		if((aux->dato)*(aux1->dato)<0){
			insertarLDE(aux,abs((aux->dato)-(aux1->dato)));
			aux=aux1;
			aux1=aux1->siguiente;
		}
	}
}