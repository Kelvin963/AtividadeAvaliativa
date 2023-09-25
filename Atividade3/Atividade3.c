#include <stdio.h>

int main(){

int senha;


                                     // nao usar mais a var senha para outros fins pois se não a senha muda e causa confusão
printf ("Informe uma senha:");       //criar outra var para ver se a senha está correta é o certo a se fazer
scanf("%d", &senha);
printf("Senha cadastrada: %d \n", senha);

int alg;        // var criada para comparar a senha


printf("Insira sua senha:");
scanf("%d", &alg);

while (1){
   
    if(alg == senha){
        printf("SENHA VALIDA!");
break;
    }else{
        printf("SENHA INVALIDA\n");

        printf("Tente novamente: ");
        scanf("%d", &alg);            // colocar outro printf/scanf para não repetir o SENHA INVALIDA infinitamente
                                     //assim o código irá pedir novamente outra senha
                                    // se repetirá até que a senha correta seja inserida
    
    }

}





return 0;
}