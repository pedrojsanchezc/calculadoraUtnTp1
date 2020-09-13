/*
 ============================================================================
 Name        : calculadoraTP1.c
 Author      : Pedro Sánchez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int main(void){
	setbuf(stdout,NULL);

	float primerNumeroIngresado;
	float segundoNumeroIngresado;
	char operacion;
	float resultado;

	printf("Calculadora U.T.N.");

	printf("\n Ingrese el primer numero:");
	fflush(stdin);
	scanf("%2f", &primerNumeroIngresado);

	printf("\n Ingrese el segundo numero:");
	fflush(stdin);
	scanf("%2f", &segundoNumeroIngresado);

	printf("\n Ingrese la siguiente letra para realizar una operación: (s) para sumar, (r) para restar, \n (m) para multiplicar,(d) para division o (f) para factorial:");
	fflush(stdin);
	scanf("%c" , &operacion);

	switch(operacion)
	{
	case 's':
		get_sumar(primerNumeroIngresado, segundoNumeroIngresado, &resultado);
		printf("\nEl resultado de %.2f + %.2f es: %.2f. \n", primerNumeroIngresado, segundoNumeroIngresado, resultado);
		break;
	case 'r':
		get_restar(primerNumeroIngresado, segundoNumeroIngresado, &resultado);
		printf("\nEl resultado de %.2f - %.2f es: %.2f. \n", primerNumeroIngresado, segundoNumeroIngresado, resultado);
		break;
	case 'm':
		get_multiplicar(primerNumeroIngresado, segundoNumeroIngresado, &resultado);
		printf("\nEl resultado de %.2f * %.2f es: %.2f. \n", primerNumeroIngresado, segundoNumeroIngresado, resultado);
		break;
	case 'd':
		get_dividir(primerNumeroIngresado, segundoNumeroIngresado, &resultado);
		printf("\nEl resultado de %.2f / %.2f es: %.2f. \n", primerNumeroIngresado, segundoNumeroIngresado, resultado);
		break;
	case 'f':
		get_factorial(primerNumeroIngresado, &resultado);
		printf("El resultado del factorial de %.0f es: %0.f \n", primerNumeroIngresado, resultado);
		break;
	}
	return EXIT_SUCCESS;
} // Fin de main(void)

