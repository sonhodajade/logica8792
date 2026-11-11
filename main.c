
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    

    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;

        if(dezena == unidade){
            printf("%d\n", i);
        }
        
        
    }
    printf("\n");
    
    



   


     return 0;

}

    







