//2) Fa�a um algoritmo, em linguagem C, que crie uma Matriz de n�meros
//inteiros de dimens�o n x m, que permita o usu�rio inserir a quantidade de linhas (n) e a
//quantidade de colunas (m) da Matriz, al�m de cada um de seus elementos, por fim,
//encontre e exiba o MAIOR dos n�meros inseridos e sua posi��o (linha e coluna) na
//Matriz.

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


int MenorAtual = matrizA[0][0];
int MaiorAtual = matrizA[0][0];

for(i = 0; i < linha; i++){ /*FOR EXTERNO: CONTROLA AS LINHAS*/
             for(j = 0; j < coluna; j++){
    if (matrizA[i][j]< MenorAtual){
            MenorAtual = matrizA[i][j];
                }
        if (matrizA[i][j]> MaiorAtual){
            MaiorAtual = matrizA[i][j];
                }
        }
    }


printf("O menor elemento e: %d\n", MenorAtual);
printf("O maior elemento e: %d\n", MaiorAtual);

return 0;
}
