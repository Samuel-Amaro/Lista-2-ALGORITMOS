#include <stdio.h>
#include <locale.h>

void main() {


    float x, y;

    printf("informe uma cordenada x sendo numerica: ");
    scanf("%f", &x);
    printf("informe uma cordenada Y sendo numerica: ");
    scanf("%f", &y);
    if (x > 0 && y > 0) {
        printf("suas cordenadas esta no quadrante 1");
    }
    if (x < 0 && y > 0) {
        printf("suas cordenadas esta no quadrante 2");
    }
    if (x < 0 && y < 0) {
        printf("suas cordenadas esta no quadrante 3");
    }
    if (x > 0 && y < 0) {
        printf("suas cordenadas esta no quadrante 4");
    } else {
        printf("suas cordenadas esta na origem");
    }
    
    
    }