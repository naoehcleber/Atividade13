int TamanhoString(char string[]){
    int i;
    for (i =0; string[i] != '\0'; i++){
        
        
    }
    return i;
}

int CompararString(char string1[], char string2[]){
    int tamanho1 = TamanhoString(string1);
    int tamanho2 = TamanhoString(string2);
    int Iguais = 0;
    for(int i =0; string1[i] != '\0'; i++){
        if (string1[i] == string2[i]){
            Iguais += 1;
        } 
    }
    if (tamanho1 == tamanho2){
        if (Iguais == tamanho1){
            return 1;
        }
    } else {
        return 0;
    }
}
