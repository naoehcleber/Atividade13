#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char frase[50];
    int contador=0;

    fgets(frase, 50, stdin);

    for(int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == ' '){
            contador +=1;
        }
    }
    printf("A frase tem %d caracteres em branco", contador);
    
    


    return 0;
}