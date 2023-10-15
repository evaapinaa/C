#include <stdio.h>
#include <stdlib.h>

int cuenta(char * s, char c){

    int n = 0;
    int i;
    for(i=0; s[i]!=0; i++)
        if (s[i] == c)
            n++;

    return n;
}

int main(){

    char s[] = "Hola Mundo";
    int n = cuenta(s,'o');
    printf("%d",n);

    return 0;
}
