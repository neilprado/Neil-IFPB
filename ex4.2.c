#include <stdio.h>
#define vel 20;
int main(){
    float desl, tempo;
    printf("Informe o deslocamento \n");
    scanf("%f", &desl);
    tempo = desl/vel;
    printf("O tempo em segundos é: %.2f", tempo);
    return 0;
}
