/*Realizar un programa que lea datos enteros desde teclado, los asigne a una
matriz de n X m datos (n y m se leen desde teclado), imprima los datos de la
matriz en pantalla y en un fichero de texto, libere la matriz y cierre el
fichero. Si algún dato leído no es un número entero, el programa repetirá la
lectura de ese dato, hasta que completen los n X m datos.*/

#include <stdio.h>
#include <stdlib.h>


int ** CreaMatriz(int n, int m) {

    int ** a = malloc(sizeof(int*)*n);
    int i;
    for(i=0; i<n; i++)
        a[i] = malloc(sizeof(int)*m);

    return a;
}

void IniciaMatriz(int **a, int n, int m) {
    int i,j;
    int resultado;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++) {
            do {
                printf("Introduce el elemento %d,%d: ",i,j);
                resultado = scanf("%d",&a[i][j]);
                
                while(getchar() != '\n');
                if (resultado != 1) printf("Introduzca un numero entero. \n");
            } while (resultado != 1);
        }
            
}


void imprimirMatriz(int **a, int filas, int columnas,char * nombre_archivo) {

    int i,j;
    FILE * f = fopen(nombre_archivo,"w");
    for (i=0;i<filas;i++) {
        for (j=0;j<columnas;j++) {
            fprintf(f, "%d ", a[i][j]);
            printf("%d ",a[i][j]);
        }
        fprintf(f,"\n");
        printf("\n");
    }
    fclose(f);

}

void liberaMatriz(int **a,int n) {
    int i;
    for(i=0; i<n; i++)
        free(a[i]);
    free(a);
}

int main() {

    int n,m;
    int resultado;

    do {
            printf("Ingrese la dimension N de la matriz N x M: ");
            resultado = scanf("%d",&n);
            
            while(getchar() != '\n');
            if (resultado != 1) printf("Introduzca un numero entero. \n");
        } while (resultado != 1);
    
    do {
            printf("Ingrese la dimension M de la matriz N x M: ");
            resultado = scanf("%d",&m);

            while(getchar() != '\n');
            if (resultado != 1) printf("Introduzca un numero entero. \n");
        } while (resultado != 1);

    int ** matriz = CreaMatriz(n,m);

    IniciaMatriz(matriz,n,m);
    imprimirMatriz(matriz,n,m,"prop1.txt");
    liberaMatriz(matriz,n);



    return 0; 
}