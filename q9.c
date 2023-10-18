#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char string[20];
    

    fgets(string, 20, stdin);
    
    if(string[0] == 'a' || string[0] == 'A'){
        printf("%s", string);
    }
    
    
    


    return 0;
}