//Fa�a um programa em Linguagem C que dado um n�mero inteiro positivo,
//verifique se ele � PAR ou �MPAR, se o n�mero for PAR obtenha o quadrado
//desse n�mero, se o n�mero for �MPAR obtenha o cubo desse n�mero.

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




