#ifndef HEAP_H
#define HEAP_H

#define MAX_SIZE 100  // Tamanho máximo do array

/**
 * Transforma uma subárvore em um heap máximo
 * @param arr Array a ser organizado
 * @param n Tamanho do heap
 * @param i Índice da raiz da subárvore
 */
void heapify(int arr[], int n, int i);

/**
 * Ordena um array usando o algoritmo Heap Sort
 * @param arr Array a ser ordenado
 * @param n Número de elementos no array
 */
void heapSort(int arr[], int n);

/**
 * Imprime um array
 * @param arr Array a ser impresso
 * @param n Número de elementos no array
 */
void printArray(const int arr[], int n);

#endif