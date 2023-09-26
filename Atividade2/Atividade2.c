#include <stdio.h>

int main (){

int alg;
int numero;
int numeroar;     //var para guardar o valor inicial do numero usado
int result = 0;  // iniciar um valor

printf("Insira um numero:");
scanf("%d", &numero);
numeroar = numero;

if (numero % 2 == 0){
    printf("%d eh par\n", numeroar);
                                               
}else {
    printf("%d eh impar\n", numeroar);
}

while (numero !=0 ){
    alg = numero % 10;
    result = result + alg;
    numero = numero / 10;

}
    
printf ("A soma dos algarismos de %d eh %d", numeroar, result);


return 0;
}