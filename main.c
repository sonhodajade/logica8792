
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    
    int n;
    printf("Digite N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }



   


     return 0;

}

    







