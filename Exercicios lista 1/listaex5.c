
void main (){

    int n, i;

    printf("quantos elementos deseja inserir?");
    scanf ("%d",&n);

    int num[n];

    for (i = 0; i < n; i++) {
        printf("insira o elemento %d° do vetor: ",(i+0));
        scanf ("%d", &num[i]);
    }


    int menorAtual = +999999;

     for (i = 0; i < n; i++) {
        if(num[i]< menorAtual){
            menorAtual = num[i];
        }

    }

    int maiorAtual = -999999;
    for (i = 0; i < n; i++) {
        if(num[i]> maiorAtual){
            maiorAtual = num[i];
        }

    }

printf("o menor elemento e: %d\n", menorAtual);
printf("o maior elemento e: %d\n", maiorAtual);

return 0;
}
