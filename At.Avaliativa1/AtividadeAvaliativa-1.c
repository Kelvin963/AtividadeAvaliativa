#include <stdio.h>
int main(){

int jogosolimpicos[29] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
int copadomundo[21] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

int numero;
int i;
int pesqevento = 0;

printf("Insira um ano:");
scanf("%d", &numero);

for (i = 0; i < 29; i++){
    if(jogosolimpicos[i] == numero){
        printf("Neste ano ocorreu os Jogos Olimpicos de Verao: %d\n", numero);
        pesqevento = 1;
    }
}

for (i = 0; i < 21; i++){
    if (copadomundo[i] == numero){
        printf("Neste ano ocorreu uma Copa do Mundo de Futebol: %d\n", numero);
        pesqevento = 1;
        break;
    }
}
    if(pesqevento == 0){
        printf("Neste ano nao ocorreu nenhum evento: %d\n", numero);
    }








    return 0;
}