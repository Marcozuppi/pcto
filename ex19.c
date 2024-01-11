#include <stdio.h>

void stampaCaratterePerCarattere(const char *stringa) {
    while (*stringa != '\0') {
        printf("%c", *stringa);
        stringa++;
    }
    printf("\n");
}

int main() {
    char input[100];

    printf("Inserisci una stringa: ");
    scanf("%99[^\n]", input);  // Legge una stringa fino a un massimo di 99 caratteri (evita overflow).

    stampaCaratterePerCarattere(input);

    return 0;
}