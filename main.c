#include<stdio.h>
#include<locale.h>







int main(){
    setlocale(LC_ALL, "pt_br.UTF-8");

    char nomes[3][20] ={
        "Elisandro",
        "fahur",
        "Maria Helena"
    };

    for(int i = 0; i < 3; i++){
        printf("%s\n", nomes[i]);
    }


    

   





 
    
     return 0;
}



