#include <stdio.h>
#include <locale.h>

void invert( int vetor[], int n ){
    int auxiliar[n];
    int index;

    for(index = 0; index < n; index++){
        auxiliar[index] = vetor[index];
    }
    for(index = 0; index < n; index++){
        vetor[index] = auxiliar[n-1-index];
    }

}

int main(){
    int vet[5] = {1,2,3,4,5};
    inverte (vet, 5);

    for(int count = 0; count < 5; count++){
        printf("%d \t", vetor[count]);
    }
}