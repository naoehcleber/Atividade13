#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char frase[50];
    

    fgets(frase, 50, stdin);

    for(int i = 0; frase[i] != '\0'; i++){
       if (frase[i] > 64 && frase[i] < 91){
        frase[i] = frase[i] + 32;
       }
    }
    printf("%s", frase);
    
    


    return 0;
}