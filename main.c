#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    
float a, b, c;

printf("Digite os três lados de um triângulo: ");
scanf("%f %f %f", &a, &b, &c);

if(a == b && b == c){
    printf("equilátero!\n");
}else if(a == b || a == c || b ==c){
printf("isosceles!\n");
    }else{
        printf("Escaleno!\n");
    }


 
    
     return 0;
}


