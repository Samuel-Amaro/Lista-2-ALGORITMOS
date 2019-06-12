#include <stdio.h>

void main() {
    int *ponteiro, valor;

    printf("informe um valor inteiro: ");
    scanf("%d", &valor);
    ponteiro = &valor;
    printf("ponteiro %u em hexadecimal e %x", &valor, ponteiro);

}