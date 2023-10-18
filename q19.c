#include <stdio.h>
#include <string.h>
#include "funcoes.h"

int main(){
   char nome[20];
   int qntd = 1;
   char arrayNomes[qntd];
   int idade;
   int maiorIdade = -1;
   int menorIdade = 100;

   while(1){
    //primeiro nome
    printf("Insira o primeiro nome: ");
    fgets(nome, 20, stdin);
    //idade
    printf("Insira a idade: ");
    scanf("%d", &idade);
    if(idade < 0){
        break;
    }
    if (idade < menorIdade){
        menorIdade = idade;
    }
    if (idade > maiorIdade){
        maiorIdade = idade;
    }

    qntd++;
   }


    return 0;
}