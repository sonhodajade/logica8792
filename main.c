
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void tabuada(int numero, int contador){
    if(contador > 10){
        return;
    }
    printf("%d x %d = %d\n", numero, contador, numero * contador);

    tabuada(numero, contador + 1);

}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

   tabuada(7, 1);

    
   
     return 0;

}

    







