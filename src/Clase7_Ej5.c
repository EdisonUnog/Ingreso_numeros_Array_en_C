/*
 ============================================================================
 Name        : Clase7_Ej7.c
 Author      : Edison Francisco Uñog Valencia.
 Version     : 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * ---INGRESAR NUMEROS Y ORNENARLOS-------
 Ejercicio 2:
 a) Realizar un programa que le pida 5 numeros int al usuario y los almacene en un array,
 Suma de los numeros y el promedio.
 Luego ejecutar la funcion borrarImpares() pasandole el array y que deberá reemplazar
 los numeros que son impares por un cero.
 b) Luego imprimir el array para chequear el funcionamiento.
 c) Ordenar el array y volver a imprimirlo ordenado
 */


#include <stdio.h>
#include <stdlib.h>
#include "firmas.h"
#define NUMEROS 5

//---MAIN---------------------------------------------------------------------
int main (void){
	setbuf(stdout,NULL);
// INGRESO 5 NUMEROS, LOS GUARDO EN UN ARRAY._LO ORDENO, SACO IMPARES Y VUELVO A ORDENAR
	//clone_
	int num;
	int arrayNumeros[NUMEROS]; //5
	int i;
	int respuesta;
	int orden;
	int sumaNum;
	float promNum;

	printf("\n");
	for(i=0; i<NUMEROS;i++){
		respuesta=utn_getNumero(&num,"\t->INGRESA_NUMERO: \n\t >> ","\tError, esto no es numero\n",1);
			if(respuesta==0){
				arrayNumeros[i]=num;//en edades escribo edad en la posicion I.
			}else{
				printf("\tERROR definitivo de la condicion\n\n");
			}
	}
        printf("\n\t->NUMEROS_INGRESADOS:");
		imprimirArrayDeNumeros(arrayNumeros,NUMEROS);
		printf("\n");
  //------------------SUMA_DE_NUMEROS-----------------------------------------
		sumaNum= sumaNumeros(arrayNumeros,NUMEROS);
		printf("\n\t-SUMA: ");
		imprimirResultado(sumaNum);
 //-------------------PROMEDIO_DE_NUMEROS-------------------------------------
		promNum = promedioNumeros(arrayNumeros,NUMEROS);
		printf("\n\t-PROMEDIO: >>> %f",promNum);

  //------------------PRIMER_ORDEN_DE_NUMEROS---------------------------------
		orden=ordenarArrayInt(arrayNumeros,NUMEROS);
		if(orden>0){
			printf("\n\n\t          -Iteraciones: %d\n",respuesta);
			printf("\t-------------- - a + -------------");
		}
		imprimirOrdenDeArray(arrayNumeros,NUMEROS);

  //-------------------BORRAR_IMPARES-----------------------------------------
		printf("\n\n\t->IMPARES_BORRADOS: ");
		respuesta=borrarImparesArray(arrayNumeros,NUMEROS);
		if(!respuesta){
			printf("\n");
			printf("\n\t->NUMEROS_PARES: ");
		}
		imprimirArrayDeNumeros(arrayNumeros,NUMEROS);

 //------------------SEGUNDO_ORDEN_DE_NUMEROS----------------------------------
		orden=ordenarArrayInt(arrayNumeros,NUMEROS);
		if(orden>0){
			printf("\n\n\t          -Iteraciones: %d\n",respuesta);
			printf("\t---------------------------------");
		}
		imprimirOrdenDeArray(arrayNumeros,NUMEROS);

	return EXIT_SUCCESS;
}



