
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

   printf("Resultado: %d\n", potencia(2, 4));

    
   
     return 0;

}

    







