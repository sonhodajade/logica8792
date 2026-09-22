#include<stdio.h>
#include<locale.h>

int somar(int a, int b){
    return a + b;
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

    int resultado = somar (5, 3);
    printf("o resultado da soma é: %d", resultado);

    int resultado = subtrair (5, 3);
    printf("o resultado da subtração é: %d", resultado);

    

   





 
    
     return 0;
}



