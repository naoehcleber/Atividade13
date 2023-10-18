#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int main(){

    char string[20];
    

    fgets(string, 20, stdin);
    
    for (int i=0; string[i]!= '\0'; i++){
       if(string[i] == 'a' ||string[i] == 'e'||string[i] == 'i'||string[i] == 'o'||string[i] == 'u'){
           string[i] = ' ';
       }
    }

    printf("%s", string);
    
    
    


    return 0;
}