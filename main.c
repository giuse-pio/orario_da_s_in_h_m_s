#include <stdio.h>

int main(void) {
    int secondi, minuti, ore, secondi1;
    printf(" inserisci i secondi: ");
    scanf("%d", &secondi);
    ore= secondi/3600;
    minuti=(secondi%3600)/60;
    secondi1= secondi%60;
    printf("%d secondi corrispondono a: %d ore, %d minuti, %d secondi\n", secondi, ore, minuti, secondi1);
}
