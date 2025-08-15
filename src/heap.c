#include "heap.h"
#include <stdio.h>
#include <stdbool.h>

// Função auxiliar para trocar dois elementos
static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;        // Inicializa o maior como raiz
    int left = 2 * i + 1;   // Índice do filho esquerdo
    int right = 2 * i + 2;  // Índice do filho direito

    // Se o filho esquerdo existe e é maior que a raiz
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // Se o filho direito existe e é maior que o maior atual
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // Se o maior não é mais a raiz
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // Heapify recursivamente a subárvore afetada
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    if (n <= 1) return;  // Array já está ordenado

    // Construir heap (reorganizar array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Extrair elementos um por um do heap
    for (int i = n - 1; i > 0; i--) {
        // Move a raiz (maior elemento) para o final
        swap(&arr[0], &arr[i]);
        // Chama heapify no heap reduzido
        heapify(arr, i, 0);
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}