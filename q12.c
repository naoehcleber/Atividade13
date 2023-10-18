#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char string[20];
    char caractere;
    int contador =0;
    

    fgets(string, 20, stdin);

    for (int i=0; string[i]!= '\0'; i++){
        if(string[i] == 'a' ||string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u'){
            contador +=1;
        }
    }

    printf("A palavra tem %d vogais \n",contador);
    printf("Insira um caractere para substituir as vogais: ");


    scanf("%c", &caractere);
    
    for (int i=0; string[i]!= '\0'; i++){
       if(string[i] == 'a' ||string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u'){
           string[i] = caractere;
       }
    }

    printf("%s", string);
    
    
    


    return 0;
}