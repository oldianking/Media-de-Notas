#include <stdio.h>

// 1. Módulo de Entrada de Dados
void entradaDados(float *nota1, float *nota2, float *nota3) {
    printf("Digite sua primeira nota: ");
    scanf("%f", nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", nota3);
}
// 2. Módulo de Calcular a Média.
float calcularMedia(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 2;
}
// 3. Módulo de Saída.
void exibirMedia(float media) {
    printf("A média das suas notas é: %.2f\n", media);
}
// 4. Programa principal.
int main(){
    float nota1, nota2, nota3, media;
    entradaDados(&nota1, &nota2, &nota3);
    media = calcularMedia(nota1, nota2, nota3);
    exibirMedia(media);
    
    return 0;
}