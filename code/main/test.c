#include <stdio.h>
#include "gerador.h"

int main () {
    int* vetorNatural;
    int* vetorInverso;
    int* vetorAleatorio;
    int qtd;
    printf ("Tamanho do Vetor: ");
    scanf ("%d", &qtd);
    vetorNatural = criarVetor(qtd);
    printf ("\nVetor Normal:\n");
    imprimirVetor(vetorNatural, qtd);
    printf ("\nVetor Inverso:\n");
    vetorInverso = criarVetorInverso(qtd);
    imprimirVetor(vetorInverso, qtd);
    printf ("\nVetor Aleatorio:\n");
    vetorAleatorio = aleatorizarVetor(vetorNatural, qtd);
    imprimirVetor(vetorAleatorio, qtd);
    
    return 0;
}