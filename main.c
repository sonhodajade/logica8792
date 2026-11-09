
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

void contagem(int n){
    for(int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("Fogo!\n");
}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    contagem(5);
    


   
    
   
     return 0;

}

    







