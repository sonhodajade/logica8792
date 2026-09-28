#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>





int main(){
setlocale(LC_ALL, "pt_br.UTF-8");

for(int i = 1; i < 4; i++){
    for(int j = 1; j<4; j++){
        printf("for externo e for interno: %d %d\n", i, j);
    }
}

     return 0;


}



