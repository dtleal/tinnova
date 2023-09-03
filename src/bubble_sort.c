#include <stdio.h>

#include "bubble_sort.h"

/* Swap function */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Print elements */
void print_vector(int vector[], int v_size) {
    for (int i = 0; i < v_size; i++) {
        printf("%d ", vector[i]);
    }
}

/* Bubble sort algorithm */
void bubble_sort(int vector[], int v_size) {
    for (int i = 0; i < v_size - 1; i++) {
        for (int j = 0; j < v_size - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                swap(&vector[j], &vector[j + 1]);
            }
        }
    }
}

/* Main function */
int main(int argc, char **argv) {
    /*
    TODO: Podemos melhorar este programa, lendo o vetor a ser ordernado
    utilizando os argumentos da linha de comando.
    */
    int vector[9] = {5, 3, 2, 4, 7, 1, 0, 6};
    int v_size = sizeof(vector) / sizeof(vector[0]);

    printf("Initing %s build: %d revision: %d\n\n", APP_NAME, BUILD, REVISION);

    printf("Vetor original:\n");
    print_vector(vector, v_size);

    bubble_sort(vector, v_size);

    printf("\nVetor ordenado com Bubble Sort: \n");
    print_vector(vector, v_size);

    return 0;
}
