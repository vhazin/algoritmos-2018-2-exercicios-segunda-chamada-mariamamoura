#include <stdio.h>

int main(){
    int testes, modular, qntd_chave, i, j;
    scanf("%i", &testes);

    while (testes--){
    scanf("%i %i", &modular, &qntd_chave);
    int matriz[modular][qntd_chave], colisao[modular];
    for(i = 0; i < modular; i++)
        colisao[i] = 0;

    for(i = 0; i < qntd_chave; i++){
        int valor, temp;
        scanf("%i", &temp);
        valor = temp % modular;
        matriz[valor][colisao[valor]] = temp;
        colisao[valor]++;
    }
    for(i = 0; i < modular; i++){
        printf("%i -> ", i);
        for (j= 0; j < colisao[i]; j++){
            printf("%i -> ", matriz[i][j]);
        }printf("\\\n");
    }
    if(testes)
        printf("\n");
    }
    return 0;
}
