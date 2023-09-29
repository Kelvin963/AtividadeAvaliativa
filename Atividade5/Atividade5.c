#include <stdio.h>

int main (){

    int valor1;
    int valor2;
    int mavalor;
    int mevalor;

 
    scanf("%d", &valor1);
    

    scanf("%d", &valor2);

    if(valor1 == valor2){
        printf("Os valores lidos sao iguais\n");
        exit(0);

    }else if(valor1 > valor2){
        printf("%d eh maior que %d\n", valor1, valor2);
        mavalor = valor1;
        mevalor = valor2;

    }else if(valor1 < valor2){
        printf("%d eh maior que %d\n", valor2, valor1);
        mavalor = valor2;
        mevalor = valor1;

    }else{
        printf("Invalido");
    }

    
        if((mevalor == 0) || (mavalor % mevalor != 0)){
        
            printf("%d nao eh multiplo de %d", mavalor, mevalor);
        
        }else{
            
            printf("%d eh multiplo de %d", mavalor, mevalor);
        }

        

    

return 0;
}