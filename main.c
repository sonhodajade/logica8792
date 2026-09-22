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

    int num[5] = {1, 2, 3, 4, 5};

    printf("%d", num{0});
    printf("%d", num[2]);



    

   





 
    
     return 0;
}



