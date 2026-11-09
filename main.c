
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}





int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("2 elevado a 5 = %d\n", potencia(2, 5));
   
   
    
   
     return 0;

}

    







