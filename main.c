#include <stdio.h>

int main() {
    //Imprime toda tabela de caracteres
    /*for (int i=0; i < 256; i++) {
        printf("Inteiro %d ======> Caractere %c \n",i ,i);
    }*/

    char letra1, letra2;
    printf("Digite a letra 1:\n");
    //Limpar o buffer
    fflush(stdin);
    letra1 = getchar();
    printf("Digite a letra 2:\n");
    fflush(stdin);
    letra2 = getchar();

    printf("Letra 1: %c e Letra 2: %c \n", letra1, letra2);

    return 0;
}
