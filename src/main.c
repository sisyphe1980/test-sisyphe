#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int testPalindrome(char *chaine) {
    int lg;
    int i = 0;
    int nope = 0;
    lg = strlen(chaine);
    for (i; i < lg; i++) {
        printf("%c %d == %c %d", chaine[i], i, chaine[lg-i-1], lg - i -1);
        system("pause");
        if(i == lg - i)
            break;
        if(chaine[i] != chaine [lg -i-1])
        {
            nope++;
        }
    }
    if(nope)
        return -1;
    else
        return 0;
}

int add(int a, int b) {
    return a + b;
}

int maFunc(int a) {
    return a * 3;
}

int main(int argc, char *argv[])
{
    char *chaine = "1234321";
    if(!testPalindrome(chaine))
    {
        printf("is palinbdrome");
    } else
    {
        printf("nope palindrome");
    }
    int (*pf)(int) = &maFunc;
    printf("le triple de trois vaut : %d", (*pf)(3));
    printf("l'adresse de pf est %p", &maFunc);
    FILE* fichier = NULL;

    int a = 5, b = 6;
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
