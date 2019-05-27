#include <stdio.h>
#include <time.h>

void main() {
    //int data; 
    int dia,mes,ano,idade;
    char dateStr[9];
    
    printf("informe seu dia de nascimento: ");
    scanf("%d",&dia);
    printf("informe seu mes de nascimento: ");
    scanf("%d",&mes);
    printf("informe seu ano de nascimento: ");
    scanf("%d",&ano);
    printf("sua data de nasciemnto e: %d/%d/%d",dia,mes,ano);
    _strdate(dateStr);
    printf("data atual : %s ",dateStr);
    
    
    
    
    
}