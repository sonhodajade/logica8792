
#include<stdio.h>
#include<locale.h>
#include<string.h>

int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    return maior;
}

int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int num;
    printf("Maior: %d\n", maiorDeTres(4,6, 9));
    printf("Maior: %d\n", maiorDeTres(9, 6, 4));
    printf("Maior: %d\n", maiorDeTres(41, 60, 19));

    printf("Digite três números: ");
    scanf("%d %d %d", &num);



   

    

        
    
    

    

   
   
    
   
     return 0;

}

    







