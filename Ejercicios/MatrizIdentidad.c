#include <stdio.h>
#include <stdlib.h>


void matrizIdentidad(int n,int m[][n]) {

    int i,j;
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i==j) 
                m[i][j] = 1;
            else 
                m[i][j] = 0;
            printf("%d ",m[i][j]);
    }
    printf("\n");
    }


}
int main() {

    int matriz[4][4];
    matrizIdentidad(4,matriz);

    return 0;


}