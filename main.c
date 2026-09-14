#include<stdio.h>
#include<locale.h>

int main(){

    Setlocale(LC_ALL, "pt_BR.UTF-8");
    
    
    int n;

printf("Digite um idade: ");
scanf("%d", &idade); 

if(idade >=18) {
    printf("Você é maior de idade!");
}else{
    printf("você é menor de idade!");
}


    return 0;
}
