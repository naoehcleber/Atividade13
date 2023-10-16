#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){

    char nome[20];
    scanf("%s",&nome);

    for(int i = 0; i <4; i++){
        printf("%c",nome[i]);
    }

    return 0;
}