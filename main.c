#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

 int idade;
 int temIngresso;
 printf("Digite sua idade: ");
 scanf("%d", &idade);
 printf("Possui ingresso? (1 - sim / 0 - Não)");
 scnaf("%d", &temIngresso);

 if(idade >= 18 && temIngresso){
    printf("Entrada permitida!\n");
 }else{
    printf("Entrada não permitida!\n");
 }
    




     return 0;
}


