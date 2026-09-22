#include<stdio.h>
#include<locale.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if(b <=0){
        printf("Ele precisa ser maior que 0!");
    }else{
        return a / b;
    }
}

// // void soma(){
// //     int num1, num2;
// //     printf("Digite um valor para num1: ");
// //     scanf("%d", &num1);
// //     printf("Digite um valor para num2: ");
// //     scanf("%d", &num2);
// //     int resultado = num1 + num2;
// //     printf("O resultado da soma com void é %d\n", resultado 1 );
// }





int main(){
    setlocale(LC_ALL, "pt_br.UTF-8");

    int resultado = somar(5, 3);
    int resultado1 = subtrair(100, 2);
    int resultado2 = multiplicar(5, 8);
    int resultado3 = dividir(16,2);
    printf("O resultado da soma é: %d\n", resultado);
    printf("O resultado da subtração é: %d\n", resultado1);
    printf("O resultado da multiplicação é %d\n", resultado2);
    printf("O resultado da divisão é: %d\n", resultado3);


    

   





 
    
     return 0;
}



