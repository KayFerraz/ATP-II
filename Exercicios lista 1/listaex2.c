#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo, em linguagem C, que crie um vetor com n números
//inteiros e que permita o usuário inserir cada um dos números, por fim,
//encontre e exiba o MAIOR dos números inseridos e sua posição.
void main (){

    int n, i;

    printf("quantos elementos deseja inserir?");
    scanf ("%d",&n);

    int num[n];

    for (i = 0; i < n; i++) {
        printf("insira o elemento %d° do vetor: ",(i+0));
        scanf ("%d", &num[i]);
    }


    int maiorAtual = -999999;

     for (i = 0; i < n; i++) {
        if(num[i]> maiorAtual){
            maiorAtual = num[i];
        }
    }
    printf("o maior elemento e: %d\n", maiorAtual);

return 0;
}

