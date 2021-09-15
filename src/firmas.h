/*
 *  firmas.h
 *
 *  Created on: 15 sep. 2021
 *  Author: Edison Francisco Uñog Valencia.
 */

#ifndef FIRMAS_H_
#define FIRMAS_H_

//---------FIRMAS------------------------------------------------------------
int utn_getNumero(int* pResultado, char*mensaje, char*mensajeError, int reintentos);
int borrarImparesArray(int arrayEnteros[], int tamanioArray);
int ordenarArrayInt(int pArray[], int limite);
int imprimirOrdenDeArray(int numArray[],int indice);
void imprimirArrayDeNumeros(int* pArrayNumeros,int len);

#endif /* FIRMAS_H_ */
