#include <stdio.h>
#include <math.h>

double bump(double * x, int m) {

    double sumaCoseno4 = 0.0;
    double productoCoseno2 = 0.0;
    double suma2 = 0.0;

    int i;

    for (i=1; i<=m; i++) {
        double cosx = cos(x[i-1]);      /* Empieza en 0 */
        sumaCoseno4 += pow(cosx,4);
        productoCoseno2 *= pow(cosx,2);
        suma2 += i*pow(x[i-1],2);
        
    }

    return -fabs((sumaCoseno4 + 2.0*productoCoseno2) / pow(suma2,0.5));
}


int main() {

    return 0;
}