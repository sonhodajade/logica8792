#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

int n = 1, soma = 0;

while(n <= 100){
    soma += n;
    soma -= 1;
    printf("%d + %d = %d\n", soma, n, soma - n);
    n++;
    
}






     return 0;
}


