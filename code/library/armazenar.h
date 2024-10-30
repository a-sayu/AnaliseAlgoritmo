#ifndef ARMAZENAR_H
#define ARMAZENAR_H

void salvarVetor(int* vetor, int tamanho_vetor, const char* nome_arquivo);
int* carregarVetor(int tamanho_vetor, const char* nome_arquivo);

#endif