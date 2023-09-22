#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscabinaria(int vetor[], int tam, int elemento, int *contador) {
    int esquerda = 0;
    int direita = tam - 1;
    
    while (esquerda <= direita) {
        (*contador)++;
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (vetor[meio] == elemento) {
            return meio;
          
        } 
        else if (vetor[meio] < elemento) {
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }
    }
    
    return -1;
}

int main() {
    int tamanho = 256;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    int elemento;
    printf("Digite o elemento que deseja encontrar: ");
    scanf("%d", &elemento);
    
    int contador = 0;

    int posicao = buscabinaria(vetor, tamanho, elemento, &contador);
    
    if (posicao != -1) {
        printf("Elemento encontrado na posição %d.\n", posicao);
    } else {
        printf("Elemento não encontrado no vetor.\n");
    }
    
    printf("Número de buscas feitas: %d\n", contador);
    
    return 0;
}