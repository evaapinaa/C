#include <stdlib.h>
#include <stdio.h>

typedef struct DatosRep * Datos;

struct DatosRep{
    float minimo;
    float maximo;
    float media;
};


Datos estadisticos(float a[], int n){

    Datos d = malloc(sizeof(struct DatosRep));
    d->minimo = a[0];
    d->maximo = a[0];
    d->media = a[0];
    int i;
    for(i=1;i<n;i++) {
        if (a[i]<d->minimo) d->minimo = a[i];
        if (a[i]>d->maximo) d->maximo = a[i];
        d->media += a[i];
    }
    d->media /= n;
    return d;
}
int main() {
    float v[] = {3,2,6,1,4};
    Datos d = estadisticos(v,5);
    printf("%f, %f, %f",d->minimo,d->maximo,d->media);
    free(d);
    return 0;
}