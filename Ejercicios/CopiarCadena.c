#include <stdio.h>
#include <stdlib.h>

char * copia(char * s) {

    int n = 0;

    while(s[n]!=0)
        n++;
    
    char * c = malloc((n+1)*sizeof(char));

    int i;

    for(i=0; i<n+1; i++)
        c[i] = s[i];
    
    return c;
}

int main() {

    char s[] = "Hola";
    char * s2 = copia(s);
    puts(s2);
    
    free(s2);

    return 0;
}