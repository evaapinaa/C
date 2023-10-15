#include <stdlib.h>
#include <stdio.h>

int * sucesionFibonacci(int n) {
    int * nueva = malloc(sizeof(int)*(n+1));
    nueva[0] = 0;
    nueva[1] = 1;
    int i;
    for(i = 2 ; i<=n ; i++)
        nueva[i] = nueva[i-1] + nueva[i-2];
    return nueva;
}

int main() {

    int n = 9;
    int i;
    int * v = sucesionFibonacci(n);
    for(i=0;i<=n;i++)
        printf("%d ",v[i]);
    printf("\n");
    free(v);

    return 0;
}