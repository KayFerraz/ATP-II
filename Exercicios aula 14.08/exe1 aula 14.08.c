#include <stdio.h>
//Exercício 1) Faça um algoritmo, em linguagem C, que
// leia n números inteiros e armazene cada um deles em um vetor,
//por fim, calcule a média dos elementos presentes no vetor.

int main (){

    int n;
        printf ("digite a quantidade de elementos: ");
    scanf ("%d", &n);

int vetor [n];
float soma, media,i;

    for (int i = 0; i <n; i++){
        printf("digite o valor da posicao %d: ",i+1);
        scanf("%d", &vetor[i]);
    }


    for (int i =0;i<n; i++){
    soma = soma +vetor[i];}
media = soma / n;

    printf ("a media e: %f, media");
return 0;
}
