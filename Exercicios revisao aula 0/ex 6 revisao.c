//Faça um programa em Linguagem C que dado a idade de uma pessoa, informe
//se ela é: criança (entre 1 a 9 anos), pré-adolescente (entre 10 a 12 anos),
//adolescente (entre 13 a 17 anos), adulto (entre 18 a 59 anos) e idoso (60 anos
//ou mais).

#include<stdio.h>
#include<math.h>

#include <stdio.h>

int main() {
    int idade;
    printf("Informe sua idade em numero: ");
    scanf("%d", &idade);

    if (idade >= 1 && idade <= 9) {
        printf("Crianca\n");
    } else if (idade >= 10 && idade <= 12) {
        printf("Pre-adolescente\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("adulto\n");
    } else if (idade >= 60 ) {
        printf("idoso\n");
    } else {
        printf("Valor inválido!\n");
    }

    return 0;
}

