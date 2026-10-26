
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>



int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

    const int LANÇAMENTOS = 10;
    int dados[LANÇAMENTOS];
    int soma = 0;
    int seis = 0;
    srand(time(NULL));

    for(int i = 0; i < LANÇAMENTOS; i++){
        dados[i] = rand() % 6 + 1;
        soma += dados[i];
        if(dados[i] == 6){
            seis++;
        }
    }
    printf("Resultados dos lançamentos:\n");
    for(int i = 0; i < LANÇAMENTOS; i++){
        printf("Lançamento %d: %d\n", i + 1, dados[i]);
        
    }
    printf("\nSoma: %d\n", soma);
    printf("Quantidade de vezes que saiu 6: %d\n", seis);



    return 0;

}

    







