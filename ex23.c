#include <stdio.h>

// Funzione che stampa "positivo" se il numero passato è negativo
void stampaPositivoSeNegativo(int numero) {
    if (numero < 0) {
        printf("Positivo\n");
    } else {
        printf("Non negativo\n");
    }
}

int main() {
    int numero;

    do {
        // Chiedi all'utente di inserire un numero
        printf("Inserisci un numero intero (0 per terminare): ");
        scanf("%d", &numero);

        // Verifica se il numero è diverso da 0
        if (numero != 0) {
            // Chiama la funzione per stampare "positivo" se il numero è negativo
            stampaPositivoSeNegativo(numero);
        }

    } while (numero != 0);

    printf("Programma terminato.\n");

    return 0;
}