#include "heap.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * Lê um array da entrada padrão
 * @param arr Array onde os elementos serão armazenados
 * @param max_size Tamanho máximo do array
 * @return Número de elementos lidos ou -1 em caso de erro
 */
int readArray(int arr[], int max_size) {
    int n;
    printf("Digite o numero de elementos (maximo %d): ", max_size);
    if (scanf("%d", &n) != 1 || n <= 0 || n > max_size) {
        printf("Entrada inválida. Digite um número entre 1 e %d.\n", max_size);
        return -1;
    }

    printf("Digite os %d elementos separados por espaco:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Erro ao ler elemento %d.\n", i + 1);
            return -1;
        }
    }

    return n;
}

int main() {
    int arr[MAX_SIZE];
    int n;

    if ((n = readArray(arr, MAX_SIZE)) == -1) {
        return 1;  // Termina com erro
    }

    printf("\nArray original:\n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("\nArray ordenado:\n");
    printArray(arr, n);

    return 0;
}