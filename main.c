#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", i);

    }

    int numero, soma = 0;


    printf("Digite um número para somar : ");
    scanf("%d", &n); 

    while(numero != 0){
    soma += n;
    scanf("%d", &n); 
}
printf("soma total = %d\n", soma);


    




     return 0;
}


