#include <stdio.h>
#include "header.h"

int main() {
    char testo[100], separatori[] = {' ', '\n', '\t', '\0'}, *token;
    int numero_caratteri, numero_linee, numero_parole;
    printf("inserire il testo:\n");
    gets(testo);

    conta_tutto(testo, &numero_caratteri, &numero_parole, &numero_linee);

    printf("conta_tutto:\n numero di caratteri=%d\n numero di parole%d\n numero di linee:%d\n", numero_caratteri, numero_parole, numero_linee);


    return 0;
}
