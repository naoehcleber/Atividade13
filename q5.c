#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){

    char nome[20];
    scanf("%s",&nome);

    int tamanho = TamanhoString(nome);
    printf("O nome tem %d letras", tamanho);

    return 0;
}