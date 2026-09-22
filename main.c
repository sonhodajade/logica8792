#include<stdio.h>
#include<locale.h>

void dobrar (int *x){
    *X = *X * 2;
}

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int numero = 10
dobrar(&numero);
printf("Número depois da função %d\n", numero);

int x = 10;
int *p = &x;

printf("Valor de x: %d\n", x);
printf("Endereço de x: %p\n", &x);
printf("Valor via ponteiro: %d\n", *p);
    




 
    
     return 0;
}



