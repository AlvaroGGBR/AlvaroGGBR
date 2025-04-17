#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f\n", media);

    if (media >= 6) {
        printf("O aluno está aprovado.\n");
    } else if (media >= 4 && media < 6) {
        printf("O aluno está em recuperação.\n");
    } else {
        printf("O aluno está reprovado.\n");
    }

    return 0;
}