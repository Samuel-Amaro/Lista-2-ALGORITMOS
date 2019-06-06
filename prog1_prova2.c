#include <stdio.h>

void main() {
    int par,soma=0;
    for(par=0; par < 20; par++) {
        if(par%2==0) {
            soma=soma+par;
        }
    }
    printf("soma de numeros pares: %d",soma);
}