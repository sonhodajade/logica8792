#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>





int main(){
setlocale(LC_ALL, "pt_br.UTF-8");

int v[10];
for(int i = 0; i < 10; i++){
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &v[i]);
}
printf("vetor invertido: \n");
for(int i = 9; i >= 0; i--){
    printf("%d", v[i]);
}
printf("\n");
     return 0;


}



