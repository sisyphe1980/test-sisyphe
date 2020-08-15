#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int a = 5;
    int caracActual = 0;
    printf("nbre arg : %d", argc);
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
