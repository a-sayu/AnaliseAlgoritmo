#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gerador.h"

int* criarVetor(int qtd_entradas) {
    int* vetor = (int*)malloc(qtd_entradas * sizeof(int));
    if (vetor == NULL) return NULL;
    for (int i = 0; i < qtd_entradas; i++) {
        vetor[i] = i + 1;
    }
    return vetor;
}

int* criarVetorInverso(int qtd_entradas) {
    int* vetor = (int*)malloc(qtd_entradas * sizeof(int));
    if (vetor == NULL) return NULL;
    for (int i = 0; i < qtd_entradas; i++) {
        vetor[i] = qtd_entradas - i;
    }
    return vetor;
}

void imprimirVetor(int* vetor, int tamanho_vetor) {
    for (int i = 0; i < tamanho_vetor; i++) {
        printf ("%d ", vetor[i]);
    }
}

int* aleatorizarVetor(int* vetor, int tamanho_vetor) {
    srand(time(NULL));
    int auxiliar;
    for (int i = 0; i < tamanho_vetor; i++) {
        int pos_aleatoria = rand() % tamanho_vetor;
        auxiliar = vetor[i];
        vetor[i] = vetor[pos_aleatoria];
        vetor[pos_aleatoria] = auxiliar;
    }
    return vetor;
}