/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include <stdio.h>
#include <stdlib.h>
#define TAM 100

// Definimos el tipo de dato de la variable TIPODATO
// Esta pila trabaja con ENTEROS
typedef int TipoDato;

// Definimos la estructura y sus componentes.La llamaremos PILA
typedef struct Pila{
    TipoDato ListaPila[TAM];
    int cima;
}PILA;


// Funciones basicas
void crearpila(PILA *P);
void Push(PILA *P, TipoDato x);
TipoDato Pop(PILA *P);
TipoDato mostrarcima(PILA *P);
int pilavacia(PILA P);
int pilallena(PILA P);
void eliminarpila(PILA *P);

// Funciones extras
void copiarpila(PILA A, PILA *B);
int compararpila(PILA A, PILA B);
void ordenarpila(PILA *A);
int contarpila (PILA A);
void impirimirpila(PILA P);