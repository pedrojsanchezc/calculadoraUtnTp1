/*
 * utn.c
 *
 *  Created on: 12 sep. 2020
 *      Author: pedro_000
 */
#include <stdio.h>
#include <stdlib.h>

/* Funciones */
void get_sumar (float operador1, float operador2 , float *resultado){
	*resultado = operador1 + operador2;
}

void get_restar (float operador1, float operador2 , float *resultado){
	*resultado = operador1 - operador2;
}

int get_multiplicar (float operador1, float operador2 , float *resultado){
	*resultado = operador1 + operador2;
}

int get_dividir (float operador1, float operador2, float *resultado){
    if(resultado != NULL){
    if(operador2 != 0){
      *resultado = operador1 / operador2;
} else {
    printf("No se posible dividir por 0");
}
}
}

int get_factorial (float operador1, float *resultado) {

    int retorno = -1;
	float bufferResultado = 1;
	if (operador1 > 0) {
		for (int repeticiones = operador1; repeticiones > 1; repeticiones--) {
			bufferResultado *= repeticiones;
			}
		*resultado = bufferResultado;
		retorno = 0;
	} else {
		if (operador1 == 0) {
			*resultado = 1;
			retorno = 0;
		} else {
			printf("El número operador no puede ser negativo \n ");
		}
	}
	return retorno;
}
