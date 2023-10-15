#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float * arrayPotencias (int n,float * c,float x) {

    float * a = malloc(n * sizeof(float));
    int i;
    for (i=0;i<n;i++) {
        a[i] = c[i]*pow(x,i);
        printf("%f \n",a[i]);
    }

    return a;
}


int main() {

    int n = 3;
    float c[] = {1.0,2.0,3.0};
    float x = 2.0;

    float * nuevo = arrayPotencias(n,c,x);

    free(nuevo);

    return 0;
}