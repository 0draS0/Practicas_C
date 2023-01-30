/* 
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
*/

// Libreria
#include "pila.h"

// Funciones basicas
void crearpila(PILA *P){
    P->cima=-1;
}

void Push(PILA *P,TipoDato x){
    if(pilallena(*P)){
        printf("\nError, la pila tiene contenido\n");
        exit(-1);
    }
        P->cima = P->cima+1;
        P->ListaPila[P->cima]=x;
}

TipoDato Pop(PILA *P){
    if(pilavacia(*P)){
        printf("\nError, la pila no tiene contenido\n");
        exit(-1);
    }
    TipoDato aux= P->ListaPila[P->cima];
    P->cima= P->cima-1;
    return aux;
}

TipoDato mostrarcima(PILA *P){
    if(pilavacia(*P)){
        printf("\nError, la pila no tiene contenido\n");
        exit(-1);
    }
    return (P->ListaPila[P->cima]);
}

int pilavacia(PILA P){
    return (P.cima == -1 ? 1:0);
}

int pilallena(PILA P){
if(P.cima == TAM-1)
    return 1;
else
    return 0;
}

void eliminarpila(PILA *P){
    P->cima = -1;
}

// Funciones extras

void copiarpila(PILA A, PILA *B){
    PILA aux;
    crearpila(&aux);
        while(!pilavacia(aux)){
            Push(&aux,Pop(&A));
        }
            while(!pilavacia(aux)){
                Push(B,Pop(&aux));
            }
}

int compararpila(PILA A, PILA B){
    while(!pilavacia(A) && !pilavacia(B)){
        if(Pop(&A)!= Pop(&B)){
            return 0;
        }
    }
        if(!pilavacia(A) || !pilavacia(B)){
            return 0;
        }
            return 1;
}

void ordenarpila(PILA *A){
PILA B,C;
crearpila(&B);
crearpila(&C);
int i;
TipoDato aux1, aux2;
    if(!pilavacia(*A)){
        aux1= Pop(A);
    }
    for(i=0; i<contarpila(*A); i++){
        while(!pilavacia(*A)){
            aux2= Pop(A);
            if(aux1<aux2){
                Push(&C, aux2);
            }
            else{
                Push(&C,aux1);
                aux1=aux2;
            }
            Push(&B,aux1);
            copiarpila(C,A);
            eliminarpila(&C);
        }
    }
}

int contarpila (PILA A){
    int contador = 0;
    PILA aux;
    crearpila(&aux);
    TipoDato elemento = Pop(&A);
        if(!pilavacia(A)){
            do{
                contador ++;
                Push(&aux, elemento);
            }
            while(!pilallena(A));
                return contador;
    }
}

void impirimirpila(PILA P){
    if(!pilavacia(P)){
        int aux= Pop(&P);
        impirimirpila(P);
        printf("%d", aux);      //si colocamos antes el printf, imprimira de abajo hacia arriba
    }
}
