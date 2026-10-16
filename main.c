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

    printf("Digite o nome: ");
    scanf("%s", p1.nome);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    printf("Digite a altura: ");
    scanf("%f", &p1.altura);

    printf("Digite o peso: ");
    scanf("%f", &p1.peso);

    printf("\n--- Dados da pessoa ---\n");

    printf("nome: %s\n", p1.nome);
    printf("idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);
    printf("peso: %.2f\n", p1.peso);

        

     return 0;
}


