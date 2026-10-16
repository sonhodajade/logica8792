#include<stdio.h>
#include<locale.h>
#include<math.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
    float peso;

};

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("---- Bem-vindo à academia ----");
    printf("\n");
    


    struct pessoa p1;

    printf("Digite o nome completo: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
        

     return 0;
}


