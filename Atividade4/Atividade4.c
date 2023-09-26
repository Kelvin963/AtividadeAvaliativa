#include <stdio.h>

int main (){

char nivel;
double salario;
double a = 0.05;
double b = 0.07;
double c = 0.08;

printf ("Digite o salário do funcionario:\n");
scanf ("%lf", &salario);

printf("Digite o nivel do funcionario:\n");
scanf(" %c", &nivel);  // precisa do espaço antes do %

if (nivel == 'a'){
    printf("Salario com aumento de 5 por cento:R$ %.2lf", salario * a + salario);

}else if(nivel == 'b'){
    printf("Salario com aumento de 7 por cento:R$ %.2lf", salario * b + salario);

}else if(nivel == 'c'){
    printf("Salario com aumento de 8 por cento:R$ %.2lf", salario * c + salario);

}else{

    printf("invalido");
}


return 0;
}