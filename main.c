
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

float celsiusParaFahrenheit(){
    float celsius;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    return celsius * 9 / 5 + 32;
}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    float fahrenheit;

    fahrenheit = celsiusParaFahrenheit();
    printf("Temperatura em Fahrenheit: %.1f F\n", fahrenheit);

   
    
   
     return 0;

}

    







