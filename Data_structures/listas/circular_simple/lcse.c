/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdio.h>
#include <stdlib.h>
#include "lcse.h"

void insertarLCSE (NODO **cab,TipoDAto x){
NODO *nuevo = (NODO*)malloc(sizeof(NODO));
	nuevo->dato = x;
	nuevo->siguiente= nuevo;
	if((*cab) != NULL){
		nuevo->siguiente= (*cab)->siguiente;
		(*cab)->siguiente= nuevo;
	}
	*cab=nuevo;
}

NODO *busq_ele(NODO *cab, TipoDAto x){
NODO *aux = cab;
	while(aux->siguiente !=NULL){
		if(aux->siguiente->dato !=x){
			aux=aux->siguiente;
		}
		else{
			return aux->siguiente;
		}
	}
	if(cab->dato == x)
		return cab;
		return null;
}

void eliminarnodo(NODO **cab, TipoDato x){
NODO *aux = *cab;
int encontrado = 0;
	while(!encontrado && aux->siguiente != *cab){
		encontrado = (aux->siguiente->dato == x);
		if (!encontrado){
			aux= aux->siguiente;
		}
		encontrado = (aux->siguiente->dato == x);
		if(encontrado){
		//caso 1: un solo nodo//
		NODO *aux2 = aux->siguiente;
			if((*cab) == cab->siguiente){
				*cab= NULL;
		//caso 2: dos o mas elementos dezde cab//
			else{
				if(aux2==(*cab))
					*cab=aux;
			}
		//caso 3: no es cab
			aux->siguiente = aux2->siguiente;
			free(aux2);
		}
	}
}


void mostrartodalista(NODO *cab){
NODO *aux=cab;
	do{
		printf("%d", aux->dato);
		aux=aux->siguiente;
	}
	while(aux! = cab);
}

void copiarLSCE(NODO *cab, NODO *cab2){
	NODO *aux=cab;
	while(aux->siguiente !=cab){
		insertarLCSE(NODO cab2, (aux->siguiente->dato));
		aux=aux->siguiente;
	}
	insertarLCSE(NODO cab2, (aux->siguiente->dato));
}

//CONTAR PALABRAS
// Estructura unica para caracteres
/*
int contar(NODO *cab, char *palabra){
int c= 0;
NODO *aux = cab;
	while(aux->siguiente != cab){
		if(!strcmp(palabra, (aux->siguiente->dato))
			c++;
		if(!strcmp(palabra, (aux->siguiente->dato))
			c++;
	}
	return c;
}
*/

void liberarLSCE(NODO **cab){
	if((*cab)->siguiente != (*cab)){
		liberarLSCE(&(*cab)->siguiente);
		free((*cab)->siguiente);
	else{
		free(*cab);
	}
}