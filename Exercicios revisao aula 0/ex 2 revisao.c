//Faça um programa em Linguagem C que dado o valor de um produto vendido
//por um estabelecimento comercial, aplique um desconto de 5% sobre o valor do
//produto. Por fim, informe como resultado o valor do produto com esse desconto.

#include<stdio.h>
#include<math.h>

int main() {
   double produto, desconto;
   printf("Digite o valor do seu produto:");
   scanf("%lf",&produto);

   desconto = produto * 5 /100;
printf("o valor com desconto e: %lf", desconto);

 return 0;
}
