
#include<stdio.h>
#include<locale.h>
#include<string.h>

int absoluto(int n){
    if(n < 0){
        return -n;

    
}
return n;
}


int main(){

    setlocale(LC_ALL, "portuguese_Brazil.1252");
    setlocale(LC_ALL, "pt-BR.UTF8");
    printf("%d\n", absoluto(-8));
    printf("%d\n", absoluto(4));
    printf("%d\n", absoluto(0));

    

        
    
    

    

   
   
    
   
     return 0;

}

    







