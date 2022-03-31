/*
 ============================================================================
 Name        : ejercicio_clase_1.c
 Author      : Ali, Pablo Sharif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	// Ejercicio A

	printf("Bienvenidos a Programación 1-UTN\n"); /* prints !!!Hello World!!! */
	//return EXIT_SUCCESS;


	// Ejercicio B

	float sueldo;
	int porcentaje = 10;
	float sueldoConAumento;

	printf("Ingrese su sueldo:");
	scanf("%f", &sueldo);

	if(sueldo >= 10000)
	{
		sueldoConAumento = sueldo * porcentaje / 100 + sueldo;
		printf("Su sueldo con aumento es de $%.2f", sueldoConAumento);
	}
	else
	{
		printf("Su sueldo es de $%.2f", sueldo);
	}

	return EXIT_SUCCESS;

	//Ejercicio C
}
