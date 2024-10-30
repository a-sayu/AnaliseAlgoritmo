#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "armazenar.h"

void salvarVetor(int* vetor, int tamanho_vetor, const char* nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "wb");
    if (arquivo == NULL) {
        printf ("Erro ao abrir arquivo");
        return;
    }
    fwrite(vetor, sizeof(int), tamanho_vetor, arquivo);
    fclose(arquivo);
}

int* carregarVetor(int tamanho_vetor, const char* nome_arquivo) {
    int* vetor = (int*)malloc(tamanho_vetor * sizeof(int));
    if (vetor == NULL) {
        printf ("Erro ao alocar memória");
        return NULL;
    } 
    FILE *arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        free(vetor);
        return NULL;
    }
    
    fread(vetor, sizeof(int), tamanho_vetor, arquivo);
    fclose(arquivo);
    return vetor;
}