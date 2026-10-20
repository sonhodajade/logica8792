#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

    int numero, soma = 0;

printf("digite número para somar (0 encerra): ");
scanf("%d", &numero);

while(numero !=0){
    soma += numero;
    printf("Digite um número (0 encerra): ");
    scanf("%d", &numero);
}
printf("Soma = %d\n", soma);








     return 0;
}


