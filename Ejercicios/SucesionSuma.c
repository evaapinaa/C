#include <stdlib.h>
#include <stdio.h>

int * sucesion_suma(int n) {
    int * nueva = malloc(sizeof(int)*n);
    nueva[0] = 0;
    int i;
    for(i = 1 ; i<n ; i++)
        nueva[i] = nueva[i-1]+i;
    return nueva;
}

int main() {

    int n = 9;
    int i;
    int * v = sucesion_suma(n);
    for(i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");
    free(v);

    return 0;
}