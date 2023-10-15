#include <stdio.h>
#include <stdlib.h>

double * PrecioRebajado (double * v1, double * v2, int n) {

    double * v3 = malloc(n * sizeof(double));

    int i;
    for (i = 0;i < n;i++) {
        v3[i] = v1[i] - (v1[i] * (v2[i]/ 100));
        printf("%lf ",v3[i]);
    }

    return v3;
}

int main() {

    double precio[] = {100.0,200.0,400.0};
    double descuento[] = {10.0,20.0,40.0};

    double * precioFinal = PrecioRebajado(precio,descuento,3);
    
    free(precioFinal);

    return 0;
}
