
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    

//    unidade = ao dobro da dezena

int total = 0;

for(int i = 100; i <= 999; i++){
    
    int centena = i / 100;
    int unidade = i % 10;

    if(centena == unidade){
        total++;
    }

}
printf("Palídromo de 3 dígitos: %d\n", total);




    return 0;

}

    







