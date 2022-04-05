#include "Caminho.h"

int main(){
    int n, i = 0, j = 0;
    int **m;
    printf("\nInsira o tamanho da matriz desejada: ");
    scanf("%d", &n);
    time_t t;

    srand((unsigned) time(&t));

    m = malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        m[i] = malloc(n * sizeof(int));

    preencheEImprimeMatriz(n, i, j, m);
    caminhaMatriz(n, i, j, m);
    
    return 0;
}