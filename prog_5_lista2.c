#include <stdio.h>

void main() { //tabuada
    int valor=0,i=0;
    for(int f=0; f < 10;f++) {
        for(int g=0; g < 11;g++) {
            valor=f*g;
           // printf("tabuada do %d ",i++);
            printf("%d * %d = %d",f,g,valor);
            printf("\n");
        }
    } //printf("\\v");
}