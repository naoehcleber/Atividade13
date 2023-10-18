#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char string[20];
    int contador =0;

    fgets(string, 20, stdin);
    for (int i=0; string[i]!= '\0'; i++){
        if(string[i] == '1'){
            contador +=1;
        }
    }
    printf("%d", contador);



    return 0;
}