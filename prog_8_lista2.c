#include <stdio.h>
#include <string.h>
/*int conversion(int numero) {
    int vetor[0];
    int divisor;
    int guardar;
    int tamanhovetor;
    while(numero!=1) {
        divisor+=numero/2;
        guardar=numero%2;
        vetor[guardar];
        tamanhovetor=strlen(vetor[guardar]);
        if(divisor==1) {
            for(int i=0; i < tamanhovetor;i++) {
            printf("numero %d em binario %d",numero,vetor[guardar]);
        }
    }
    }
}
*/
void main() {
    int numero;
    //int vetor[guardar];
    int divisor=0;
    int restodivis;
    int tamanhovetor=0;
    int contadordeposic=0;
    int vetor[0];
    int contador=0; 
    printf("informe numero: ");
    scanf("%d",&numero);
    
    while(numero!=1) {
        contador+=contadordeposic++;
        restodivis=numero%2;
        divisor+=(numero/2);
        vetor[contador]=restodivis;
        //contador=contadordeposic++;
    }
        if(divisor==1) {
            for(int i=0; i < contador;i++) {
            printf("numero %d em binario %d ",numero,vetor[contador]=restodivis);
        }
    }
    }
