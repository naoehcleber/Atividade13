#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){ 

    char string1[20];
    char string2[20];

    scanf("%s",string1);
    scanf("%s",string2);

    int comparacao = CompararString(string1, string2);

    if (comparacao == 1){
        printf("iguais\n");
    } else {
        printf("diferentes");
    }

    return 0;
}