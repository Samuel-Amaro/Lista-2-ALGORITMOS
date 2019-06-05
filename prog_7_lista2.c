#include <stdio.h>
#include <string.h>

void main() {
    //programa que coloca string num vetor e depois imprimi ela invertida
    char vetor[100];
    printf("informe uma string:");
    //for(int i=0; i< 101; i++)
        fgets(vetor,100,stdin); // aqui pego o que usuario digita 
         //printf(vetor); // aqui imprimo na tela 
         for(int i=0; i<strlen(vetor);i++) {
             printf("%c",vetor[i]); // aqui tambem e para impressão da string
         }
        for(int i=strlen(vetor)-1; i>=0; i--) {
            printf("%c",vetor[i]); // aqui e para fazer o processo reversso da impressão da string invertida.
        }


}
