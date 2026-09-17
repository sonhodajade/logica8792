#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    
int opcao;
printf("--- SISTEMA DE PERDÁGIO ---\n");
printf("1 - Moto\n");
printf("2 - Carro passeio\n");
scanf("%d", &opcao);

switch (opcao)
{
    case 1:
    printf("categoria: Moto | Tarifa: R$ 5,00\n");
    break;

    case 2:
    printf("categoria: carro passeio | Tarifa: R$ 10,00\n");
    break;

    default:
    printf("erro: categoria não cadastrada no sistema.\n);
        break;
}


 
    
     return 0;
}


