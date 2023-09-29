#include <stdio.h>

int main(){

int senha;


scanf("%d", &senha);
printf("senha cadastrada: %d\n", senha);

int alg;



scanf("%d", &alg);

while (1){
   
    if(alg == senha){
        printf("senha valida!\n");
break;
    }else{
        printf("senha invalida!\n");

        scanf("%d", &alg);
    
    }

}





return 0;
}