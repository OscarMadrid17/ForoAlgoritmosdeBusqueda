/*
*ejemplo8_7.c
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 100
void quickSort( int[], int, int);
int partition( int[], int, int);
void imprimeCB(int *CB) {
 int i;
 for(i = 0; i < TAM-1; i++) {
 printf( "%d, ", CB[i]);
 }
 printf( "%d\n", CB[i]);
}
int main() {
 int CB[TAM];
 int e;
 srand((unsigned int)time(NULL));
 for(e = 0; e < TAM; e++)
 CB[e] = (int)(rand() % 100);
 printf( "Antes de ordenar\n----------------------\n");
 imprimeCB(CB);
 quickSort( CB, 0, TAM-1);
 printf( "\nDespués de ordenar\n--------------------\n");
 imprimeCB(CB);
}
void quickSort( int CB[], int izquierda, int derecha){
 int indice_pivote;
 if( izquierda < derecha ) {
 indice_pivote = partition( CB, izquierda, derecha);
 quickSort( CB, izquierda, indice_pivote-1);
 quickSort( CB, indice_pivote+1, derecha);
 }
}
int partition( int CB[], int izquierda, int derecha) { 

 int pivote, i, j, tmp;
 pivote = CB[izquierda];
 i = izquierda; j = derecha;

 while( 1){
 while( CB[i] <= pivote && i <= derecha ) ++i;
 while( CB[j] > pivote ) --j;
 if( i >= j ) break;
 tmp = CB[i]; CB[i] = CB[j]; CB[j] = tmp;
 }
 tmp = CB[izquierda]; CB[izquierda] = CB[j]; CB[j] = tmp;
 return j;
} 
