#include <stdio.h>

void main() {
    int numero, *ponteiro;

    printf("informe um numero: ");
    scanf("%d", &numero);
    ponteiro = &numero;
    int conversor = (int) &ponteiro; //usando casting para converter de hexadeimal para decimal
    printf("em hexadecimal e %x \n", ponteiro);
    printf(" hexadecimal = %x em decimal = %i \n", ponteiro, ponteiro);//para converter para decimal uso o propio operador i
    int temporario, contador = 0, gurdarbinario[30];
    while (conversor != 1) {
        temporario = numero % 2;
        conversor = conversor / 2;
        gurdarbinario[contador] = temporario;
        contador++;
        //printf(".");
    }
    gurdarbinario[contador] = 1;
    printf("o endereço da memoria guardado em binario e ");
    for (int c = contador; c >= 0; c--) {
        printf("%d", gurdarbinario[contador]);
    }
    printf("\n");
    //

}
