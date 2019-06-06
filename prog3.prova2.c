#include <stdio.h>
int mudar(int*s,int*l);
int mudar(int*s,int*l) {
    int aux;
    aux=*s;
    *s=*l;
    *l=aux;
    return;
}
void main() {
    int numero; int numero1=200;
    printf("informe um numero: ");
    scanf("%d",&numero);
    mudar(&numero,&numero1);
    printf("valor original \n");
    printf("numero = %d || numero 1 = %d \n",numero,numero1);
    printf("valores trocados \n");
    mudar(&numero,&numero1);
    printf("numero = %d || numero 1 = %d ",numero,numero1);
            
}