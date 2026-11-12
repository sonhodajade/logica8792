
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    

    for(int i = 0; i <= 200; i++){
        if(i % 10 == 3){
            printf("%d\n", i);
            int n; 
            n++;
        }
    }
    printf("%d\n");


   


     return 0;

}

    







