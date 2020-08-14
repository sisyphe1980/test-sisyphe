#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int caracActual = 0;

    fichier = fopen("newTest.txt", "r");
    perror("Probleme de fichier :");
    if(fichier != NULL) { 
        do { 
            caracActual = fgetc(fichier);
            printf("%c", caracActual);
        } while (caracActual != EOF);
    }
    fclose(fichier);
    return 0;
}
