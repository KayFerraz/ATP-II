//1) Faça um algoritmo, em linguagem C, que crie uma Matriz de números reais
//de dimensão n x m, que permita o usuário inserir a quantidade de linhas (n) e a
//quantidade de colunas (m) da Matriz, além de cada um de seus elementos, por fim,
//encontre e exiba a soma de todos os elementos da Matriz.


#include <stdio.h>
#include <locale.h>

int main (){

int linha,coluna, i, j;
printf("digite a quantidade de linhas:");
scanf("%d",&linha);
printf("digite a quantidade de coluna:");
scanf("%d",&coluna);


float matrizA[linha] [coluna];

for (i = 0;i<linha; i++){
    for (j = 0; j <coluna; j++){
        printf ("Digite o elemento [%d][%d]",i, j);
        scanf ("%f",&matrizA[i][j]);
    }
}

for(i = 0; i < linha; i++){ /*FOR EXTERNO: CONTROLA AS LINHAS*/

        for(j = 0; j < coluna; j++){ /*FOR INTERNO: CONTROLA AS COLUNAS*/

            printf("%f, ", matrizA[i][j]);
        }
        printf("\n");
    }
return (0);
}
