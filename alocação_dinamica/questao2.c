#include <stdio.h>
#include <stdlib.h>

//Função para criar uma matriz de float:
float ** criaMatrizFloat(int linhas, int colunas){
    
    float ** matriz = (float**) malloc(linhas*sizeof(float*));
    int linha;
    for(linha=0; linha<linhas; linha++){
        matriz[linha] = (float*) malloc(colunas*sizeof(float)); 
    }
    return matriz;
}

int main(void){
    // Alocando uma matriz de numeros reais 5x5
    int linhas = 2;
    int colunas = 2;
    int i, j;
    printf("Digite os valores para matriz: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            scanf("%f", &matriz[i] [j]);
        }
    }
    //Liberar a matriz
    for(linha=0; linha<linhas; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    
    return 0;
}
