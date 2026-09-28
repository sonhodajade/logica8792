#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>





int main(){
setlocale(LC_ALL, "pt_br.UTF-8");

int contador = 0;
for(int i = 0; i <= 9; i++){
    for(int j = 0; j <= 9; j++){
        for(int x = 0; x <= 9; x++){
            for(int x = 0; x <= 0; x++){
                for(int y = 0; y <= 9; y++){
                    contador++;
                    printf("os possíveis resultados do cadeado: %d %d %d %d\n", i, j, x, y);
                }
            }
        }
    }
}
printf("O número total de interações: %d\n", contador);
     return 0;


}



