
#include<stdio.h>
#include<locale.h>
#include<string.h>

int somaDigitos(int n){
    int soma = 0;
    while(n != 0){

        soma += n % 10;
        n /= 10;
    }
    return soma;
}




int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("soma dos dígitos é: %d\n", (23));
   
   
    
   
     return 0;

}

    







