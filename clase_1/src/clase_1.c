/*
 ============================================================================
 Name        : clase_1.c
 Author      : Ali, Pablo Sharif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //esto es para los que usamos windows, para que nos muestre las cosas.

	int edad;
	float temperatura;

	temperatura = 36.5;

	printf("Ingrese su edad:\n");
	scanf("%d", &edad);

	printf("Su edad es de %d años, y tiene una temperatura de %.1f grados celcius.", edad, temperatura);
	return EXIT_SUCCESS;
}
