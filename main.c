#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");
    
float a, b, c;

printf("Digite os três lados de um triângulo: ");
scanf("%f %f %f", &a, &b, &c);

if(a + b > c && b + c > a){
    printf("os lados formam um triângulo!\n");
}else{
    printf("Os lados não formam um triângulo!\n");
}


 
    
     return 0;
}


