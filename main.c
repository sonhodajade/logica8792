
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int soma (int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    return total;
}





int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("Soma de 1 até... %d\n", soma(10));

   
   
    
   
     return 0;

}

    







