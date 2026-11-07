
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int somarDigitos(int numero){
    if(numero == 0){
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);

}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("soma: %d\n", somarDigitos(1234));

   
    
   
     return 0;

}

    







