#include <stdio.h>
// Exerc�cio 2) Fa�a um algoritmo, em linguagem C, que leia n n�meros inteiros e armazene cada
// um deles em um vetor, por fim, percorra o vetor para encontrar o maior n�mero persente no
//conjunto e mostre-o para o usu�rio.
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
void
    for (int i =i-1;i>=0; --i){
        if (vetor[i]== n) return i;
        return -1;}


    printf ("a media e: %f, media");
return 0;
}

