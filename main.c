
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

long long fatorial(int n){
    long long resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}





int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("5! = %lld\n", fatorial(5));

   
   
    
   
     return 0;

}

    







