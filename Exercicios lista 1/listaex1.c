#include <stdio.h>
#include <stdlib.h>

void main (){

    int n, i;

    printf("quantos elementos deseja inserir?");
    scanf ("%d",&n);

    int num [n];

    for (i = 0; i < n; i++) {
        printf("insira o elemento %d° do vetor: ",(i+0));
        scanf ("%.2f", &num[n]);
    }


return 0;
}

