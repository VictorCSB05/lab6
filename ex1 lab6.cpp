#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int buscalinear(int vetor[], int tam, int elemento, int *contador) {
    for (int i = 0; i < tam; i++) {
        (*contador)++;
        if (vetor[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int main() {
    int tamanho = 256;

    int vetor[tamanho];
    
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 1000;
    }
    
    int elemento;
    printf("Digite qual elemento deseja encontrar: ");
    scanf("%d", &elemento);
    
    int contador = 0;

    int posicao = buscalinear(vetor, tamanho, elemento, &contador);
    
    if (posicao != -1) {
        printf("Elemento encontrado na posição: %d.\n", posicao);
    } else {
        printf("Elemento não encontrado.\n");
    }
    
    printf("Número de buscas feitas: %d\n", contador);
    
    return 0;
}