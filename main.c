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
    


    int n;
    printf("Quantas pessoas deseja cadastrar: ");
    Scanf("%d", &n);
    getchar();
    struct pessoa p1[n];
    for(int i = 0; i < n; i++){
        printf("\nPessoa %d\n, ", i + 1);
        printf("Nome completo: ");
        fgets(p1[i].nome, sizeof(p1[i].nome), stdin);

        printf("idade: ");
        scanf("%d", &p1[i].idade);
        printf("Altura: ");
        scanf("%f", &p1[i].altura);
        printf("Peso: ");
        scanf("%f", &p1[i].peso);
        getchar();
    }
    printf("\n--- Lista de Pessoas ---\n");
    for(int i = 0; i < n; i++){
        printf("Nome: %s | Idade: %d | Altura: %.2f | peso: %.2f");
    }


     return 0;
}


