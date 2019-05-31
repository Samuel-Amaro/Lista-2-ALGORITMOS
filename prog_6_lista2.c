#include <stdio.h>
//programa matriz preenchida com triangulo pascal

void main() {
    int matriz[8][8];
    int l, c,linha;
    printf("informe numero de linhas para o triangulo ter: ");
    scanf("%d",&linha);
    // aqui toda a matriz recebe valor 0 em cada posição.
    for (l = 0; l < linha; l++) {
        for (c = 0; c < linha; c++) {
            matriz[l][c] = 0;
        }
    }
    // aqui usuario preenche coluna 0 nas linhas normais com valor 1
    for (l = 0; l < linha; l++) {
        printf(" prencha matriz com valor 1 na linha %d coluna 0:  ", l);
        scanf("%d", &matriz[l] [0]);
    }

    // aqui imprimo para usuario valores informados na linha normais e coluna 0

    for (l = 0; l < linha; l++) {
        printf("%d |", matriz[l] [0]);
        printf("\n");
    }
       // aqui e feito o prenchimento da diagonal principal com valor 1
    for (l = 0; l < linha; l++) {
        printf("informe valor 1 para linha %d e coluna %d: ", l, l);
        scanf("%d", &matriz[l][l]);
    }
    // diagonal principal sendo  impressas para o usuario.
    for (l = 0; l < linha; l++) {
        printf("diagonal principal");
        printf("\n matriz linha %d coluna %d = %d |", l, l, matriz[l][l]);

    }
    // aqui e feito todo processo para obter os valores de acordo com o triangulo de pascal
    for (l = 1; l < linha; l++) {
        for (c = 1; c < linha; c++) {
           // if (matriz[l][c] == 0) {
                matriz[l][c] = matriz[l - 1][c] + matriz[l][c - 1];
            //}
        }
          // aqui a matriz esta sendo imprimida com restrição para impressão de valores diferentes de 0
        for (l = 0; l < linha; l++) {
            for (c = 0; c < linha; c++) {
                if (matriz[l][c] != 0) {
                    printf(" %d |", matriz[l][c]);
                }
                printf("\n");
            }
        }

    }
}






























