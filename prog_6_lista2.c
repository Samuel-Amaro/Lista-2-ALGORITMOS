#include <stdio.h>
//programa matriz preenchida com triangulo pascal
void main() {
    int matriz[8][8]={{1},
                      {1,  1}, 
                      {1,    1},
                      {1,      1},
                      {1,        1},
                      {1,          1}, 
                      {1,            1},                     
                      {1,              1}};
 //for(l=0;l<8;l++) {
     //for(c=0;c<8;c++) {
         //matriz[l][c]=matriz[l][c] + matriz[l[c];}}}
         matriz[3][1]=matriz[2][1] + matriz[2][0];
          printf("%d \n",matriz[3][1]);
         matriz[3][2]=matriz[2][1] + matriz[2][2];
           printf("%d \n",matriz[3][2]);
         matriz[4][1]=matriz[3][1] + matriz[3][0];
           printf("%d \n",matriz[4][1]);
          matriz[4][2]=matriz[3][1] + matriz[3][2];
           printf("%d \n",matriz[4][2]);
           matriz[4][3]=matriz[3][2] + matriz[3][3];
           printf("%d \n",matriz[4][3]);
            matriz[5][1]=matriz[4][1] + matriz[4][0];
           printf("%d \n",matriz[5][1]);
             matriz[5][2]=matriz[4][2] + matriz[4][1];
           printf("%d",matriz[5][2]);
              matriz[5][3]=matriz[4][2] + matriz[4][3];
           printf("%d",matriz[5][3]);
               matriz[5][4]=matriz[4][4] + matriz[4][3];
           printf("%d",matriz[5][4]);
               matriz[6][1]=matriz[5][1] + matriz[5][0];
           printf("%d",matriz[6][1]);
               matriz[6][2]=matriz[5][1] + matriz[5][2];
           printf("%d",matriz[6][2]);
                matriz[6][3]=matriz[5][2] + matriz[5][3];
           printf("%d",matriz[6][3]);
                 matriz[6][4]=matriz[5][3] + matriz[5][4];
           printf("%d",matriz[6][4]);
                  matriz[6][5]=matriz[5][4] + matriz[5][5];
           printf("%d",matriz[6][5]);
                  matriz[7][1]=matriz[6][1] + matriz[6][0];
           printf("%d",matriz[7][1]);
                   matriz[7][2]=matriz[6][1] + matriz[6][2];
           printf("%d",matriz[7][2]);
                    matriz[7][3]=matriz[6][2] + matriz[6][3];
           printf("%d",matriz[7][3]);
                     matriz[7][4]=matriz[6][3] + matriz[6][4];
           printf("%d",matriz[7][4]);
                      matriz[7][5]=matriz[6][4] + matriz[6][5];
           printf("%d",matriz[7][5]);
             
                      matriz[7][6]=matriz[6][5] + matriz[6][6];
           printf("%d",matriz[7][6]);
     }
         
                
                      
                      
                      
                      
                      
                      