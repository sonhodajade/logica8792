
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

char* tipoVeiculo(char placa[]){
    char primeiro = placa[0];
    if(primeiro >= 'A' && primeiro <= '2'){
        return "Veículo particular";
    }else if(primeiro >= '0' && primeiro <= '9'){
return "placa irregular";
}else{
        return "Formato desconhecido";
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;
    char placa[8];
    printf("\n---- SISTEMA DE TRÂNSITO BRASILEIRO ----");
    printf("Digite os caracteres da placa do veículo: ");
    scanf("%s", placa);

    do{
        printf("\n1 - ver placa | 2 - Tipo de veículo | 0 - Sair: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
            printf("PLACA DO VEÍCULO: %s\n", placa);
            break;

            case 2: 
            printf("Tipo: %s\n", tipoVeiculo(placa));
            break;

            case 0:
            printf("Saindo..\n");
            break;

            default:
            printf("Número inválido!\n");
            break;

        }
    }while(opcao != 0);
    

   

    return 0;

}

    







