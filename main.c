
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    int total = 0;
    for(int i = 1; i <= 100; i++){
       
        if(i % 10 == 7){
        printf("%d\n", i);
        total++;

        }

    }
    printf("\nTotal: %d\n", total);
    
    



   


     return 0;

}

    







