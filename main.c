
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int contarDigitos(int numero){
    if(numero < 10){
        return 1;
    }
    return 1 + contarDigitos(numero / 10);
}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

   printf("Quantidade: %d\n", contarDigitos(45872));
    
   
     return 0;

}

    







