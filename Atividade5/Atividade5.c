#include <stdio.h>

int main (){

    int valor1;
    int valor2; 

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &valor2);

    if(valor1 == valor2){
        printf("O primeiro e o segundo valor sao iguais\n");
        exit(0); // não faz mais nada se os valores forem iguais

    }else if(valor1 > valor2){
        printf("%d eh maior que %d\n", valor1, valor2);
        

    }else if(valor1 < valor2){
        printf("%d eh maior que %d\n", valor2, valor1);

    }else{
        printf("Invalido");
    }


    if(valor2 != 0){
        if(valor1 % valor2 == 0){
            printf("%d eh multiplo de %d", valor1, valor2);
        
        }else{
            printf("%d nao eh multiplo de %d", valor1, valor2);
        }
    }


    

// falta colocar para ler  se o numero é multiplo, mas ainda está contando o menor primeiro que o maior
return 0;
}