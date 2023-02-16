#include <stdio.h>
#include <stdlib.h>

typedef enum genero{
    MASCULINO,
    FEMININO
}Genero;

typedef struct pessoa{
    char nome[50];
    int idade;
    Genero genero;
}Pessoa;
int main(void){
    Pessoa pessoa;
    printf("Digite o nome: \n");
    scanf(" %[^\n]s", pessoa.nome);
    printf("Digite a idade: \n");
    scanf("%d", &pessoa.idade);
    printf("Digite o genero: \n");
    scanf("%d", (int*) &pessoa.genero);
    printf("Seu nome e: %s\nSua idade e: %d\n", pessoa.nome, pessoa.idade);
    pessoa.genero==MASCULINO?printf("GENERO: MASCULINO"): printf("GENERO: FEMININO");
    return 0;
}
