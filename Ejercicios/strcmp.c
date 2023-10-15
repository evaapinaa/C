#include <stdio.h>
#include <string.h>

int busca(char texto[][20], int n, char * s) {
    int i=0;
    while((i<n)&&strcmp(texto[i],s)) i++;
    return (i<n);
}

int main() {

    char texto[][20]={"hola","mundo"};
    char s[20];
    scanf("%s",s);
    if (busca(texto,2,s))
        printf("La cadena se encuentra en el texto.\n");
    else
        printf("La cadena no se encuentra en el texto.\n");
    return 0;

    char cadena1[10] = "hola";
    char cadena2[10] = " mundo";
    char saludo[20];
    strcpy(saludo,cadena1);
    strcat(saludo,cadena2);
    printf("%s",cadena2);
    printf("%s",cadena1);
}
