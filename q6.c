#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char nome[20], sexo[2];
    int idade;

    char ParametroSexo[] = "F";
    int ParametroIdade = 25;
    printf("DIgite seu nome : ");
    fgets(nome,20,stdin);
    printf("Digite o sexo (M ou F) : ");
    fgets(sexo, 2, stdin);
    printf("Digite sua idade : ");
    scanf("%d", &idade);

    int Analise1 = strcmp(sexo, ParametroSexo);
    //retorna  0 -> iguais
    if (Analise1 == 0){
        if (idade <= ParametroIdade){
            printf("ACEITA\n");
        }
    } else {
        printf("NAO ACEITA\n");
    }





    return 0;
}