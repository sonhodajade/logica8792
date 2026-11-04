
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int ehPar(int n){
    return n % 2 == 0;
}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int quantidade = 0;
    int soma = 0;

    printf("Pares de 1 a 20: ");
    for(int i = 1; i <= 20; i++){
        if(ehPar(i)){
            printf("%d", i);
            quantidade++;
            soma += i;
        }
    }
    printf("\nQuantidade: %d\n", quantidade);
    printf("Soma: %d\n", soma);

   
     return 0;

}

    







