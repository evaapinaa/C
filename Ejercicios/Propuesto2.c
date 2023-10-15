/*Realizar un programa que lea datos enteros de un fichero de texto (el del
ejercicio propuesto anterior), construya una matriz de n X m datos con los
datos del fichero (n y m se leen desde teclado), imprima los datos de la
matriz en pantalla, libere la matriz y cierre el fichero. Si no existen n X m
datos en el fichero, el fichero no existe, o algún dato no es entero, deberá
producirse una situación de error e imprimirse en pantalla, abortando el
programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int ** CreaMatriz(int n, int m) {

    int ** a = malloc(sizeof(int*)*n);
    int i;
    for(i=0; i<n; i++)
        a[i] = malloc(sizeof(int)*m);

    return a;
}

void IniciaMatriz(int **a, int n, int m, char * nombre_archivo) {
    int i,j;
    int resultado;
    FILE * f = fopen(nombre_archivo,"r");
    if (f == NULL) {
        fprintf(stderr,"Fichero vacio.\n");
        exit(-1);
    }
    else {
    for(i=0; i<n; i++)
        for(j=0; j<m; j++) {
            resultado = fscanf(f,"%d",&a[i][j]);
            if (resultado != 1) {
                fprintf(stderr,"Descripcion: %s \n", strerror(errno));
                //fprintf(stderr,"Error %i: ", strerror(errno));
                //fprintf(stderr,"No numero entero en la posicion (%d,%d) o dimension incompatible. \n",i,j);
                exit(-1);
            }
        }
    }
    fclose(f);
            
}


void imprimirMatriz(int **a, int filas, int columnas) {

    int i,j;

    for (i=0;i<filas;i++) {
        for (j=0;j<columnas;j++) {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    
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

    IniciaMatriz(matriz,n,m,"prop1.txt");
    imprimirMatriz(matriz,n,m);
    liberaMatriz(matriz,n);



    return 0;
}