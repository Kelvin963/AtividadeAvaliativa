#include <stdio.h>

int main (){

int alg;
int numero;
int result = 0;  // iniciar um valor

printf("Insira um numero:");
scanf("%d", &numero);

if (numero % 2 == 0){
    printf("O numero eh par\n");
                                               
}else {
    printf("O numero eh impar\n");
}

while (numero !=0 ){
    alg = numero % 10;
    result = result + alg;
    numero = numero / 10;

}
printf ("A soma dos algarismos resulta em %d", result);


return 0;
}