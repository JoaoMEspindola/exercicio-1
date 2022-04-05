#ifndef CAMINHO_H 
#define CAMINHO_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

void imprimeMatriz(int tam, int i, int j, int **mat);
void preencheEImprimeMatriz(int tam, int i, int j, int **mat);
int caminhaMatriz(int tam, int i, int j, int **mat);

#endif