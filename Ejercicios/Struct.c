#include <stdio.h>
#include <stdlib.h>

typedef struct Punto * Punto;

struct Punto {
    double x,y;
};

Punto PuntoCrea(double x, double y) {
    Punto p = malloc(sizeof(struct Punto));
    p -> x = x;
    p -> y = y;
    return p;
}

Punto PuntoMedio(Punto p1, Punto p2) {

    return PuntoCrea((p1 -> x + p2 -> x)/2,(p1 -> y + p2 -> y)/2);
    
}

int main() {

    Punto p1 = PuntoCrea(1.2,2.3);
    Punto p2 = PuntoCrea(5.2,3.3);
    Punto p3 = PuntoMedio(p1,p2);

    printf("%f,%f\n",p3 -> x, p3 -> y);
    
    free(p1);
    free(p2);
    free(p3);

    return 0;
}