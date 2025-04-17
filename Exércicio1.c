#include <stdio.h>

int main() {
    int idade;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Criança\n");
    } else if (idade >= 12 && idade <= 17) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }   
        return 0;
    }