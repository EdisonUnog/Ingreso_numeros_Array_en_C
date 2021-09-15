/*
 *  funciones.c
 *
 *  Created on: 15 sep. 2021
 *  Author: Edison Francisco Uñog Valencia.
 */
#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------------
static int encontrarImpar(int arrayBuscar[], int indice);
int utn_getNumero(int* pResultado, char*mensaje, char*mensajeError, int reintentos){
//siempre que recibo un puntero me fijo que la direccion de memoria no sea NULL. (!=NULL)=>obligatorio.
	int retorno=-1;
    int bufferInt;

	if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL  && reintentos>=0){
		do{// me asegura que el codigo se va a cumplir si o si una ves
			printf("%s",mensaje); //"%s": recibi una cadena de caracteres o un string.
			scanf("%d",&bufferInt);//"%d" "&": para obtener la direccion de memoria.
			if(bufferInt){
				*pResultado=bufferInt;
				retorno=0;
				break;
			}else{
				printf("%s",mensajeError);
				reintentos--; //-1
			}
		}while(reintentos>=0);
	}
	return retorno;
}
//----------BORRAR-IMPARES------------------------------------------------------
int borrarImparesArray(int arrayEnteros[], int tamanioArray){
	int retorno=-1;
	int i;
	if(arrayEnteros!=NULL && tamanioArray>=0){
		retorno=0;
		for(i=0;i<tamanioArray;i++){
			if(encontrarImpar(arrayEnteros,i)==0){
				//aca es un impar
				arrayEnteros[i]=0;
			}
		}
	}
	return retorno;
}
//----STATIC--------------------------------------------------------------------
static int encontrarImpar(int arrayBuscar[], int indice){
	int retorno=-1;
	if(arrayBuscar[indice]%2!=0){
		retorno=0;
		printf(" %d,",arrayBuscar[indice]);
	}
	return retorno;
}
//----------------ORDENAR_NUMEROS-----------------------------------------------
int ordenarArrayInt(int pArray[], int limite){
	int flagSwap;
	int i;
	int cont=0;
	int retorno=-1;
	int numero;
	int nuevoLimite;

	if(pArray!=NULL && limite>=0){
		nuevoLimite=limite-1;
		do{
			flagSwap=0;
			for(i=0; i<nuevoLimite ;i++){
				cont++;
				if(pArray[i] > pArray[i+1]){
					flagSwap=1; //va a fozar una nueva vuelta del while
					numero=pArray[i];
					pArray[i]=pArray[i+1];
					pArray[i+1]=numero;
				}
			}
		}while(flagSwap);
		retorno=cont;
	}
	return retorno;
}
//--------------------IMPRIMIR_ORDEN_DE_NUMEROS----------------------------------
int imprimirOrdenDeArray(int numArray[],int indice){//int*numArray
	int retorno=-1;
	int i;
	if(numArray!=NULL && indice>=0){
		retorno=0;
		for(i=0;i<indice;i++){
			printf("\n\t -Posicion_%d y su numero es >> %d",i,numArray[i]);
		}
	}
	return retorno;
}
//-------------------------IMPRIMIR----------------------------------------------
void imprimirArrayDeNumeros(int pArrayNumeros[],int len){
	int indice;
	if(pArrayNumeros!=NULL && len>=0){
		for(indice=0; indice<len; indice++)
		{
			printf(" %d,",pArrayNumeros[indice]);
		}
	}
	return;
}
