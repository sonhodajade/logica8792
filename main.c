
#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");

    
// terminam em 7 e são múltiplos de três 1 a 500

int total = 0;

for(int i = 1; i <= 500; i++){
    if(i % 10 == 7 && i % 3 == 0){
        printf("%d\n", i);
        total++;
    }

}
printf("\nTotal: %d\n", total);



    return 0;

}

    







