#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    

    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if(a != b){
        printf("Os números são iguais!\n");
    }else{
        printf("Os números são diferentes!\n");
    }

     return 0;
}

