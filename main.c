
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int somar(int n){
    if(n == 0){
        return 0;
    }
    return n + somar(n - 1);
}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

   int resultado = somar(5);
   printf("Resultado: %d\n", resultado);

    
    



    
   
     return 0;

}

    







