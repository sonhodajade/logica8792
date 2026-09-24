#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>





int main(){
setlocale(LC_ALL, "pt_br.UTF-8");

int n, soma = 0;

printf("Digite um valor para n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    soma +=i;
}

printf("O resultado da soma é: %d\n", soma);





   

     return 0;


}



