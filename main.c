
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

float celsiusParaFahrenheit(float c){
    return c * 9 / 5 + 32;
}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);
    printf("%.1f c = %.1f F\n", celsius, fahrenheit);
   
    
   
     return 0;

}

    







