#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char frase[50];
    fgets(frase, 50, stdin);
    char L1;
    char L2;
    printf("DIgite a letra que vc quer substituir: ");
    scanf(" %c",&L1);
    printf("DIgite a letra que vc quer que substitua: ");
    scanf(" %c",&L2);

    for(int i =0; frase[i] != '\0'; i++){
        if(frase[i] == L1){
            frase[i] = L2;
        }
    }
    printf("%s",frase);

    
    
    
    return 0;
}