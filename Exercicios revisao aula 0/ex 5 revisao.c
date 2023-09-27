//Faça um programa em Linguagem C que dado um número inteiro positivo,
//verifique se ele é PAR ou ÍMPAR, se o número for PAR obtenha o quadrado
//desse número, se o número for ÍMPAR obtenha o cubo desse número.

#include<stdio.h>
#include<math.h>

int main() {
   int num, valor;

   printf("Digite o numero aqui:");
   scanf("%d", &num);

   valor = num % 2;

   if (valor == 0 ) {
   valor = pow(num, 2);
   printf ("o resultado e: %d", valor);
   } else if (valor != 0 ) {
   valor = pow(num, 3);
   printf ("o resultado e: %d", valor);
   } else {
   return; }


 return 0;
}




