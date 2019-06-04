#include <stdio.h>

void main() {
    int divis=0;
    int continuar=0;
    int numernormal;
    int gurdar;
    int vetor[0];
    //int vetor1[0];
    int contador;
    
    printf("informe um numero inteiro par: ");
    scanf("%d",&numernormal);
    //int vetor[numernormal];
    printf("deseja converter para binario seu numero: 1- nao 0-sim ");
    scanf("%d",&continuar);
    while(continuar){        //int contador;
        contador++;
        //contador1++;
         divis=divis + (numernormal / 2); 
         if(divis>0) {
        vetor[contador]= numernormal % 2;
         } 
         //printf("deseja converter para binario seu numero: ");
    //scanf("%d",&continuar);
    
        //divis=numernormal / 2;
        //for(int i=0; i < numernormal; i++) {
        //printf("seu numero em binario e: %d",vetor[gurdar]);
                                      }
    for(int i=0; i < 1000; i++) {
        printf("numero binario e: %d",vetor[contador]);
    
    }
}
    //for(int i=0; i < 100; i++) {
      //  printf("numero binario e: %d",vetor[contador]);
    //}
    //}     
       
    
    
    

