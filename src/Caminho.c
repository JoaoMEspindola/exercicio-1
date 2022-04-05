#include "Caminho.h"

void imprimeMatriz(int tam, int i, int j, int **mat){
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf ("%d", mat[i][j]);
            printf (" ");
        }
        printf("\n");
    }
}

void preencheEImprimeMatriz(int tam, int i, int j, int **mat){
    
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            mat[i][j] = rand() % 99;
        }
    }
    imprimeMatriz(tam, i, j, mat);
}



int caminhaMatriz(int tam, int i, int j, int **mat){
    int soma = 0;
    i = 0;
    j = 0;
    while(i != tam && j != tam){
        //TRATAMENTO PRIMEIRA COLUNA
        if (j == 0){
            if (i < tam-1 && mat[i+1][j] > mat[i][j+1]){
                i++;
                soma += mat[i-1][j] + mat[i][j];
                mat[i-1][j] = -1;                
                printf("\nDESCEU. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }else{
                j++;
                soma += mat[i][j-1] + mat[i][j];
                mat[i][j-1] = -1;                
                printf("\nDIREITA. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }
        }
        //TRATAMENTO ULTIMA LINHA
        else if(i == tam-1 && j <= (tam-1)){
            j++;
            soma += mat[i][j];
            mat[i][j-1] = -1;
            printf("\nDIREITA. SOMA: %d \n", soma);                    
            imprimeMatriz(tam, i, j, mat);
        }
        //TRATAMENTO ULTIMA COLUNA
        else if(j == tam-1){
            if (mat[i+1][j] > mat[i][j-1]){
                i++;
                soma += mat[i][j];
                mat[i-1][j] = -1;              
                printf("\nDESCEU. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }
            else{
                j--;
                soma += mat[i][j];
                mat[i][j+1] = -1;               
                printf("\nESQUERDA. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }
        //TRATAMENTO CASO GERAL
        }else{
            if (mat[i+1][j] > mat[i][j-1] && mat[i+1][j] > mat[i][j+1]){
                i++;
                soma += mat[i][j];
                mat[i-1][j] = -1;
                printf("\nDESCEU. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }

            else if (i < tam-1 && mat[i][j-1] > mat[i+1][j] && mat[i][j-1] > mat[i][j+1]){
                j--;
                soma += mat[i][j];
                mat[i][j+1] = -1;
                printf("\nESQUERDA. SOMA: %d \n", soma);
                imprimeMatriz(tam, i, j, mat);
            }

            else if (mat[i][j+1] > mat[i][j-1] && mat[i][j+1] > mat[i+1][j]){
                j++;
                soma += mat[i][j];
                mat[i][j-1] = -1;                                
                printf("\nDIREITA. SOMA: %d \n", soma);                    
                imprimeMatriz(tam, i, j, mat);
            }
        }
    }  
    return soma;
}