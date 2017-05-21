#include <stdio.h>
int main (){
    float n1, n2, n3, media, pond;
    printf ("Por favor, informe as notas: ");
    scanf ("%f", &n1);
    scanf ("%f", &n2);
    scanf ("%f", &n3);
media = (n1 + n2 + n3) / 3;
pond = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 1;

printf ("A média aritmética é: %.2f" , media);
printf("A média ponderada é: %.2f" , pond);
return 0;
}
