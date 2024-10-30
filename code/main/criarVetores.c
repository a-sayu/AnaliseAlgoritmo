#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../library/gerador.h"
#include "../library/armazenar.h"

int main () {
    int op = -1;
    int tamanho_vetor = 5;
    int *vetor;

    vetor = criarVetor(tamanho_vetor);
    salvarVetor(vetor, tamanho_vetor, "archives/natural5.bin");

    vetor = aleatorizarVetor(vetor, tamanho_vetor);
    salvarVetor(vetor, tamanho_vetor, "archives/aleatorio5.bin");

    vetor = criarVetorInverso(tamanho_vetor);
    salvarVetor(vetor, tamanho_vetor, "archives/inverso5.bin");
    
    return 0;
}