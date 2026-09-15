#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    

    int a, b, c, d, e, menor;


    printf("Digite um número para a: ");
    scanf("%d", &a);

    printf("Digite um número para b: ");
    scanf("%d", &b);

    printf("Digite um número para c: "); 
    scanf("%d", &c);

    printf("Digite um número para d: ");
    scanf("%d", &d);

    printf("Digite um número para e: ");
    scanf("%d", &e);


    menor = a;

    if(b < menor) menor = b;
    if(c < menor) menor = c;
    if(d < menor) menor = d;
    if(e < menor) menor = e;

    printf("Menor:%d", menor); 

     return 0;
}

