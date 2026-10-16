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

    printf("---- Bem-vindo à academia ----")

    struct p1;

    printf("Digite o nome: ");
    scanf("%s", p1.nome);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    printf("Digite a altura: ");
    scanf("&.2f", &p1.altura);

    printf("\n--- Dados da pessoa ---\n");
    
     return 0;
}


