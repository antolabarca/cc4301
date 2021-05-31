#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
  int x;             // un elemento del conjunto
  struct nodo* next; // proximo nodo de la lista enlazada
} Nodo;


//lo que hace incognito es sumar todos los valores de un struct tipo linked list
//retorna 0 si el input es un puntero nulo



int incognito(Nodo* a0){
	Nodo* a5;
	a5 = a0;

	/* 
	if (a0 == NULL) { 
		// Esta parte corresponde a L4, pero se puede omitir, ya que lo unico que hace es retornar 0
		// si inicialmente a4==0, y para eso es suficiente con retornar la variable 'a' al final
		return 0;
	}
	*/

	int a = 0; //int a0 para ir llevando la suma

	while (a5 != NULL) { //equiv a que el puntero no sea 0, pero creo que es más bonito así
		// L3
		int a4 = a5->x; //a4 es a5[0], es decir, el primer campo (el valor)
		a += a4;
		a5 = a5->next; //a5 es a5[4], es decir, el 2o campo (el puntero a next)
		//bne a5, zero, L3 : vuelve a hacer L3 si a5 no es NULL
	}

	return a; // es 0 si nunca se entro al while, si no es la suma que se obtuvo en L3
}