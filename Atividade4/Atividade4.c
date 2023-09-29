#include <stdio.h>

int main (){

char nivel;
double salario;
double a = 0.05;
double b = 0.07;
double c = 0.08;

scanf(" %c", &nivel);

scanf ("%lf", &salario);

if (nivel == 'a'){
    printf("R$ %.2lf", salario * a + salario);

}else if(nivel == 'b'){
    printf("R$ %.2lf", salario * b + salario);

}else if(nivel == 'c'){
    printf("R$ %.2lf", salario * c + salario);

}else{

    printf("invalido");
}


return 0;
}