
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

   char texto[100];
   int tamanho = 0;

   printf("Digite uma frase: ");
   fgets(texto, 100, stdin);
   texto[strcspn(texto, "\n")] = '\0';

   while(texto[tamanho] != '\0'){
    tamanho++;
   }
   printf("Quantidade de caracteres: %d\n", tamanho);
    



   return 0;

}

    







