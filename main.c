#include<stdio.h>
#include<locale.h>

void saudar(const char *nome){
    printf("olá %s!\n", nome);
}

int main(){
    setlocale(LC_ALL, "pt_br.UTF-8");

    saudar("Marcos");
    saudar("Silva");
    saudar("Ferreira");






 
    
     return 0;
}



