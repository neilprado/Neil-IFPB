#include <stdio.h>
int main(){
    float pass, hosp, alim, total;
    printf("Informe os valores: \n");
    scanf("%f", &pass);
    scanf("%f", &hosp);
    scanf("%f", &alim);
    total = pass + hosp + alim;
    if (total > 8000) {
        printf("Sua viagem custará %.2f reais, infelizmente nao e possivel faze-la", total);
    } else
    printf("Sua viagem custará %.2f reais, divirta-se", total);
    return 0;
}
