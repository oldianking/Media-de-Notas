#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    // Informar as notas.
    printf("Por favor, conforme o programa solicita, informe as suas notas a seguir.\n");
    printf("------------------------------------------------------------------------\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("\n");
    // Cálculo da média.
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média das suas notas é: %.2f\n", media);
    printf("---------------------------------"); 
    printf("\n");
    printf("----------- OBRIGADO! -----------\n");

    return 0;
}
