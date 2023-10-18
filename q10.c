#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char string[20];
    

    fgets(string, 20, stdin);
    
    for (int i=strlen(string);i>=0 ; i--){
        printf("%c", string[i]);
    }
    
    
    


    return 0;
}