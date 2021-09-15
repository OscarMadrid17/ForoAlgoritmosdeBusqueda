/*
*ejemplo8_3.c
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 100
void imprimeCB(int *CB) {
 int i;
 for(i = 0; i < TAM-1; i++) {
 printf( "%d, ", CB[i]);
 }
 printf( "%d\n", CB[i]);
}
int main() {
 int CB[TAM];
 int ini=0,fin=TAM-1,mitad,dato,i;
 srand((unsigned int)time(NULL)); 
 for(i = 0; i < TAM; i++)
 CB[i] = (int)(rand() % 100);
 imprimeCB(CB);
 dato = (int)(rand() % 100);
 CB[i] = dato;
 printf("Dato a buscar %d\n",dato);
 mitad=(ini+fin)/2;
 while ((ini<=fin)&&(CB[mitad]!=dato))
 {
 if (dato < CB[mitad])
 fin=mitad-1;
 else ini=mitad+1;
 mitad=(ini+fin)/2;
 }

 if (dato==CB[mitad]) printf("Posicion %d\n", mitad);
 else printf("Elemento no esta en el array");

} 
