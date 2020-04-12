#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int strLen(const char *chaine) {
        int nbCarac = 0;
        char caracActual = 0;
        do {
                caracActual = chaine[nbCarac];
                nbCarac++;
        } while (caracActual != '\0');
        nbCarac--;
        return nbCarac;
}

int main() {

        char chaine[] = "une";
        int nb = strLen(chaine);
        printf("La chaine vaut : %d carac", nb);

        return 0;
}