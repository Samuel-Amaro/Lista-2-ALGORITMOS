#include <stdio.h>
#include <string.h>

void main() {
int i=0;
int contador=0,contador2=0;    
char string[10];

printf("informe uma string: ");
for(i=0; i < 10; i++) {
    scanf("%c",&string[i]);
    if(string[i] == 'a') {
    contador++;
    //printf("sua string tem %d de letras 'a' ",contador);
} if(string[i] == 'A') {
    contador2++;
}
    
}
printf("sua string tem %d de letras 'a' ",contador+contador2);
}

