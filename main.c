#include <stdio.h>

int main() {

    int x = 10;
    int y = 15;

    //valor
    printf("Valor de x: %d \n", x);
    printf("Valor de x: %d \n", y);

    //endereço
    printf("Endereco de x: %d \n", &y);
    printf("Endereco de y: %d \n", &y);


    //A contagem dos números varia se o sinal de mais ou menos está a esquerda ou a direita da variavel
    int z = ++x + ++y;
    printf("Valor de z: %d \n", z);
    printf("Valor de x: %d \n", x);
    printf("Valor de x: %d \n", y);

    //Ver tamanhos
    /*int a = 10;
    double x = 13.34;
    printf("Tamanho em bytes do int: %ld \n", sizeof(int));
    printf("Tamanho em bytes do double: %ld \n", sizeof(double));
    */

    return 0;
}
