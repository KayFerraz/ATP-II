//Faça um programa em Linguagem C que considerando um triângulo retângulo,
//dado os catetos (cat1 e cat2) construa um algoritmo que calcule a hipotenusa
//(hip). Sabendo que: hip2 = cat1
//2 + cat22


#include<stdio.h>
#include<math.h>


int main() {
   double catetoum, catetodois, hip;
    printf("Digite o numero do primeiro cateto:");
    scanf ("%lf",&catetoum);
    printf("Digite o numero do segundo cateto:");
    scanf ("%lf",&catetodois);

 hip = sqrt( pow(catetoum, 2) + pow(catetodois, 2));
 printf("O resultado e: %lf",hip);


 return 0;
}
