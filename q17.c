#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char frase[50];
    fgets(frase, 50, stdin);
    int k =0;

    for(int i = 0; frase[i] != '\0'; i++){
        frase[i] = frase[i+k];
        if (frase[i] == ' '){
            k++; 
            i--;
        }
    }
    printf("%s", frase);
    
    
    
    
    return 0;
}