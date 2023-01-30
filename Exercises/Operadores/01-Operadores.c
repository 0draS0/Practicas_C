/*
	Algoritmia y programacion estructurada
	Autor: Odra Sanchez
	Practica 01: Operadores basicos
*/

// Librerias
	#include <stdio.h>
	#include <stdlib.h>

int main() {

//Ejercicio 1
	int a = 2, b = 3, c = 5, d = 3; // Variables con valores asignados
	/*El operador AND genera el valor 1 si ambos operandos tienen valores distintos de cero.
	Si alguno de los operandos es igual a 0, el resultado es 0*/
		//int r = a && b;                   //1
	 	//int r = (a && b) | ++c;           //2
		//int r = (a && b) | (++c ^ 0xA1);  //3
		int r = a && b | ++c ^ 0xA1 >>d;    //4	
		printf ("Ejercicio 1: a=%d b=%d c=%d d=%d r=%d",a,b,c,d,r); // Impresion de variables y resultado de la operacion


//Ejercicio 2: AND
	int x = 1, y = -2; // Variables con valores asignados
	int z= x && y;
	printf("\nEjercicio 2: z=%d",z);


//Ejercicio 3: OR
	int q = 0xF, t = -071; // Variables con valores asignados
	/*El operador OR lógico realiza una operación OR inclusivo en sus operandos. 
	  El resultado es 0 si ambos operandos tienen valores 0.
	  Si cualquiera de los operandos tiene un valor distinto de cero, el resultado es 1.*/
	int w= q || t;
	printf("\nEjercicio 3: w=%d",w);


//Ejercicio 4
	int e = 0, f = 0xA; // Variables con valores asignados
	int p= e^f;
	printf("\nEjercicio 4: p=%d",p);

//Ejercicio 4.1
	int x1 = 5, y1 = 0xA; // Variables con valores asignados
	int z1= x1 ^ y1;
	printf("\nEjercicio 4.1: z1=%d",z1);

//Ejercicio 5
	int v=0; // Variables con valores asignados
	int n= !v;
	printf("\nEjercicio 4.1: n=%d",n);


//Ejercicio 6
	int a1=0xF, b1=0x1, c1=5; // Variables con valores asignados
	int h= a1&b1^c1;
	printf("\nEjercicio 4.1: h=%d",h);

// Practica
/*
	int a=-1,b=010, c=0xF, d=0;
	int r = a>b^c!=d&&++a==d;
	printf("a=%d b=%o c=%x d=%d r=%d",a,b,c,d,r);
	
	int a = 5, b=2, c=3;
	int r= (a>b)||(c>b)^(++a>++b);
	printf("a=%d b=%d c=%d r=%d",a,b,c,r);
*/

    return 0;
}