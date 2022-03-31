/*
 ============================================================================
 Name        : ejercicios_clase_2.c
 Author      : Ali, Pablo Sharif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMITE 5

int main(void) {
	setbuf(stdout, NULL);

	// Ejercicio 1

	int numero;
	int i;
	int numeroMayor;
	int numeroMenor;
	int flag = 0;

	for(i = 0; i < LIMITE; i++){
		printf("Ingrese un numero");
		scanf("%d", &numero);

		if(flag == 0 || numero < numeroMenor){
			numeroMenor = numero;
		}
		if(flag == 0 || numero > numeroMayor){
			flag = 1;
			numeroMayor = numero;
		}
	}

	printf("El numero mayor es %d, el numero menor es %d.", numeroMayor, numeroMenor);

	return 0;
}
