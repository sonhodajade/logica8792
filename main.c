
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int inverter(int numero, int resultado){
    if(numero == 0){
        return resultado;
    }
    return inverter(numero / 10, resultado * 10 + numero % 10);

}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("Invertido: %d\n", inverter(1234, 0));

   
    
   
     return 0;

}

    







