#include <stdio.h>

void main() {
    int dia_nascimento, mes_nascimento, ano_nascimento, dia_atual, mes_atual, ano_atual, dias_totais_convertidos = 0;
    int vetordataano[12] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31};
    // aqui pego as datas do usuario.
    printf("informe seu dia de nascimento: ");
    scanf("%d", &dia_nascimento);
    printf("informe seu mes de nascimento: ");
    scanf("%d", &mes_nascimento);
    printf("informe seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("informe dia atual: ");
    scanf("%d", &dia_atual);
    printf("informe mes atual: ");
    scanf("%d", &mes_atual);
    printf("informe ano atual: ");
    scanf("%d", &ano_atual);

    // convertendo ano em dias
    dias_totais_convertidos += (ano_atual - ano_nascimento) * 365;

    // convertendo mes em dias
    for (int i = 0; i < mes_atual - 1; i++) {
        dias_totais_convertidos += vetordataano[i];
    }
    // adicionando dias atuais
    dias_totais_convertidos += dia_atual;
    // descontando dias em que ele nasceu
    dias_totais_convertidos -= (dia_nascimento) + 1;
    // descontando os meses de nascimento
    for (int i = 0; i < mes_nascimento - 1; i++) {
        dias_totais_convertidos -= vetordataano[i];
    }

    // fazendo calculo sobre a questão dos anos bissextos.
    dias_totais_convertidos += (ano_atual - ano_nascimento) / 4;
    // o quociente da divisão sera os dias a mais de cada ano bissexto.

    printf("vc ja tem %d de dias vividos", dias_totais_convertidos);



}