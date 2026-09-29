#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>





int main(){
setlocale(LC_ALL, "pt_br.UTF-8");

int n;

printf("Digite o tamanho do triângulo: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        printf("* ");
    }
    printf("\n");
}
     return 0;


}



