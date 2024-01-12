#include <stdio.h>
#include <string.h>

// Funzione che stampa la lunghezza di una stringa
void stampaLunghezzaStringa(const char* str) {
    int lunghezza = strlen(str);
    printf("La lunghezza della stringa \"%s\" e': %d\n", str, lunghezza);
}

int main() {
    // Esempio di utilizzo della funzione
    char miaStringa[] = "Ciao, mondo!";
    stampaLunghezzaStringa(miaStringa);

    return 0;
} 