#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_br.UTF-8");


int opcao = -1;

while (opcao != 0){
    printf("\nMenu: \n");
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Consultar\n");
    printf("0 - sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: printf("você escolheu depositar\n"); break;
        case 2: printf("Você escolheu sacar\n"); break;
        case 3: printf("Você escolheu consultar\n"); break;
        case 0: printf("saindo..."); break;
        default: printf("opção invalida!\n");
    }
}

   

     return 0;


}



