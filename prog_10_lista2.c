#include <stdio.h>

void somar(int*m, int*n) {
    printf("soma %d + %d = %d \n", *m, *n, *m + *n);

}

void subtrair(int*s, int*r) {
    printf("subtraindo %d - %d = %d \n", *s, *r, *s - *r);
}

void multiplicar(int*e, int*f) {
    printf("multiplicar %d * %d = %d \n", *e, *f, (*f)*(*e));
}

void dividir(int*x, int*y) {
    printf("dividindo %d / %d = %d \n", *x, *y, *x / *y);

}

void main() {
    int y, x;
    printf("informe um valor positivo: ");
    scanf("%d", &x);
    printf("informe um valor positivo: ");
    scanf("%d", &y);
    somar(&x, &y);
    //printf("soma %d + %d = %d", y, x, somar);
    subtrair(&x, &y);
    //printf("subtração %d - %d = %d \n", y, x, subtrair);
    multiplicar(&x, &y);
    //printf("multiplicar %d + %d = %d \n", y, x, multiplicar);
    dividir(&x, &y);
    //printf("dividir %d + %d = %d \n", y, x, dividir);
}