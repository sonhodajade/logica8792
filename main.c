
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int soma = 0;
    for(int i = 1; i <= 50; i++){
        if(i % 2 == 1){
            
            soma += i;
        }
    }
    printf("A soma dos ímpares é: %d\n", soma);
    



   


     return 0;

}

    







