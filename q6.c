#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char nome[20], sexo[1];
    int idade;

    char ParametroSexo[] = "F";
    int ParametroIdade = 25;
    printf("DIgite seu nome : ");
    fgets(nome,20,stdin);
    printf("Digite o sexo (M ou F) : ");
    fgets(sexo, 1, stdin);
    printf("Digite sua idade : ");
    scanf("%d", &idade);

    int Analise1 = strcmp(sexo, ParametroSexo);
    if (Analise1 == 1){
        if (Idade <= ParametroIdade){
            printf("ACEITA\n")
        }
    }





    return 0;
}