#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    

    int diaDasemana;

    printf("Digite um número de (1 a 7): ");
    scanf("%d", &diaDasemana);

    if(diaDasemana == 1){
        printf("Domingo!");
    }else if(diaDasemana == 2){
        printf("Segunda-feira");
    }else if(diaDasemana == 3){
        printf("Terça-feira");
    }else{ if(diaDasemana == 4){
        printf("Quarta-feira");
    }else if(diaDasemana == 5){
        printf("Quinta-feira");
    }else if(diaDasemana == 6){
        printf("Sexta-feira");
    }else if(diaDasemana == 7){
        printf("Sábado!");
    }else{
        printf("valor inválido!");
    }
    
     return 0;
}


