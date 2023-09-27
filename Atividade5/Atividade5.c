#include <stdio.h>

int main (){

    int valor1;
    int valor2;
    int mavalor;
    int mevalor;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    if(valor1 == valor2){
        printf("Os valores lidos sao iguais\n");
        exit(0); // não faz mais nada se os valores forem iguais

    }else if(valor1 > valor2){
        printf("%d eh maior que %d\n", valor1, valor2);
        mavalor = valor1;     //definir o maior e menor valor para sequenciar o codigo numero a1*
        mevalor = valor2;

    }else if(valor1 < valor2){
        printf("%d eh maior que %d\n", valor2, valor1);
        mavalor = valor2;
        mevalor = valor1;

    }else{
        printf("Invalido");
    }

    
        if((mevalor == 0) || (mavalor % mevalor != 0)){         //codigo numero a1*
        
            printf("%d nao eh multiplo de %d", mavalor, mevalor);
        
        }else{
            
            printf("%d eh multiplo de %d", mavalor, mevalor);
        }

        

    

return 0;
}