#include <stdio.h>
//programa matriz preenchida com triangulo pascal
// matriz 8 por 8

void main() {
    int matriz[8][8];
    int l, c;
    
    // aqui toda a matriz recebe valor 0 em cada posição.
    for (l = 0; l < 8; l++) {
        for (c = 0; c < 8; c++) {
            matriz[l][c] = 0;
        }
    }
    // aqui usuario preenche coluna 0 nas linhas normais com valor 1
    for (l = 0; l < 8; l++) {
       matriz[l][0]=1;
       
    }

    // aqui imprimo para usuario valores informados na linha normais e coluna 0

    //for (l = 0; l < 8; l++) {
        //printf("%d |", matriz[l] [0]);
        //printf("\n");
    //}
       // aqui e feito o prenchimento da diagonal principal com valor 1
    for (l = 0; l < 8; l++) {
        matriz[l][l]=1;
        
    }
    // diagonal principal sendo  impressas para o usuario.
    //for (l = 0; l < 8; l++) {
        //printf("diagonal principal");
        //printf("\n %d |", matriz[l][l]);

    //}
    // aqui e feito todo processo para obter os valores de acordo com o triangulo de pascal
    for (l = 2; l < 8; l++) {
        for (c = 1; c < matriz[l][c]!=1; c++) {
            if(matriz[l][c] == 0) {
               matriz[l][c] = matriz[l - 1][c - 1] + matriz[l - 1][c];
            }
        }
          // aqui a matriz esta sendo imprimida com restrição para impressão de valores diferentes de 0
        for (l = 0; l < 8; l++) {
            for (c = 0; c < 8; c++) {
                if (matriz[l][c] != 0) {
                    printf(" %d |", matriz[l][c]);
                }
               
            }
       printf("\n"); } //printf("\n");

    }//
}
