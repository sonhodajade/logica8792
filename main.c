
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    

char palavra[50];

int tamanho;
int palídromo = 1;

printf("Digite uma palavra: ");
scanf("%49s", palavra);

tamanho = strlen(palavra);

for(int i = 0; i < tamanho / 2; i++){
    if(palavra[i] != palavra[tamanho - 1 - i]){
        palídromo = 0;
    }
}
if(palídromo == 1){
    printf("A palavra é um palindromo!\n");
}else{
    printf("A palavra não é um palíndromo!\n");
}



    return 0;

}

    







