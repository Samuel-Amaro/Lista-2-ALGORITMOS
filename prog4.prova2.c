#include <stdio.h>
#include <string.h>
int trocar(int*k,int*u);
int trocar(int*k,int*u) {
    int aux;
    aux=*k;
    *k=*u;
    *u=aux;
    return;
}
void main() {
    char vetor[10]; int i;char l='z';
    printf("informe uma string: ");
    for(i=0; i < 10; i++) {
        fgets(vetor,i,stdin);
        
    }
    for(i=0; i< 10; i++) {
        printf("%c",vetor[i]);
    }
    for(i=0; i < 10; i++) {
        if(vetor[i] == 'a') {
            trocar(&vetor[i],&l);
            printf("%c",vetor[i]);
        }
    }
    
    }
    
    



