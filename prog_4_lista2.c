#include <stdio.h>
#include <math.h>

void main() {
    //essa parte calcula media.
    int valornum = 0, valoresacum = 0, continuar = 1, qtdnum = 0;
    float media, raiz,varia,desvpad,desdife=0,restDesvqud,desvtotal=0,desv=0,desv2=0,desv2total=0;;
    while (continuar) {
        printf("informe valores para calcular media: ");
        scanf("%d", &valornum);
        qtdnum++;
        valoresacum = valoresacum + valornum;
        media = valoresacum / qtdnum;
         printf("continuar? 1-sim 0-nao: ");
        scanf("%d", &continuar);
        
        if (continuar==0) {
        desdife=valornum-media;
        desvtotal=desvtotal + (desdife * -1);
        desv=desvtotal/qtdnum;
        desv2=pow(desdife,2);
        desv2total= desv2total + desv2;
        varia=desv2total/(qtdnum-1);
        desvpad=sqrt(varia); }
       // printf("continuar? 1-sim 0-nao: ");
        //scanf("%d", &continuar);
        //desMed=valornum - media;
        //restDesvqud= pow(desMed,2);
    }
    printf("valores acumulados: %d \n", valoresacum);
    printf("sua media e : %.2f \n", media);
    printf("%.2f variança \n",varia);
    printf("seu desvio padrao e: %.1f%",desvpad);
    //calculando variança
    //raiz = sqrt(media); //parte que calcula raiz. 
    //printf("desvio padrao da media e: %.2f%% ", raiz); //saida formatada na tela para usuario.
}










