//Faça um programa em Linguagem C que dado a nota da prova 1 (NP1) a nota
//da prova 2 (NP2) a nota do trabalho 1 (NT1) a nota do trabalho 2 (NT2) calcule
//a média final (MF) de um aluno e indique se ele foi APROVADO ou
//REPROVADO, sabendo que:


#include<stdio.h>
#include<math.h>

int main() {
   double p1, p2, t1, t2, mf, mp, mt;

    printf("Digite a nota da prova um:");
    scanf("%lf",&p1);
    printf("Digite a nota da prova dois:");
    scanf("%lf",&p2);
    printf("Digite a nota do trabalho um:");
    scanf("%lf",&t1);
    printf("Digite a nota do trabalho um:");
    scanf("%lf",&t2);


    mp = p1 + p2 /2;
    mt = t1 + t2 /2;
    mf = 0.8 * mp + 0.2 * mt;

    if (mf < 5){
        printf("Reprovado");
     }else {
        printf("Aprovado");
     }


 return 0;
}
