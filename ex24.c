#include <stdio.h>

// Funzione per lo scambio di due elementi
void scambia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funzione per ordinare crescentemente un array di interi
void ordinaCrescente(int *array, int dimensione) {
    for (int i = 0; i < dimensione - 1; i++) {
        for (int j = 0; j < dimensione - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Scambia gli elementi se non sono in ordine
                scambia(&array[j], &array[j + 1]);
            }
        }
    }
}

// Funzione per stampare un array
void stampaArray(int *array, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int dimensione;

    // Chiedi all'utente la dimensione dell'array
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &dimensione);

    int array[dimensione];

    // Chiedi all'utente di inserire gli elementi dell'array
    printf("Inserisci gli elementi dell'array:\n");
    for (int i = 0; i < dimensione; i++) {
        scanf("%d", &array[i]);
    }

    // Chiama la funzione per ordinare l'array
    ordinaCrescente(array, dimensione);

    // Stampa l'array ordinato
    printf("Array ordinato crescentemente: ");
    stampaArray(array, dimensione);

    return 0;
}