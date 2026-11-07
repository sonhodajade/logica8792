
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int buscar(int vetor[], int tamanho, int valor){
    if(tamanho == 0){
        return -1;
    }
    if(vetor[tamanho - 1] == valor){
        return tamanho - 1;
    }
    return buscar(vetor, tamanho - 1, valor);
}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    int numeros[] = {10, 20, 30, 40, 50};
    int posição = buscar(numeros, 5, 30);
    
    printf("Posição: %d\n", posição);
    


   
    
   
     return 0;

}

    







