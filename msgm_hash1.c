#include <stdio.h>

int testes, a, b, x, n, c, d, m;
int hx, colisao;

int main(){
    scanf("%i", &testes);

    while (testes--){
        scanf("%i %i %i %i %i %i %i", &a, &b, &x, &n, &c, &d, &m);
        for (int i = 0; i <= n; i++){
            hx = (a *(x + i) + b) % m;
            if ((c <= hx) && (hx <= d) && (hx <= (m - 1))){
                colisao++;
            }
        } printf("%i",colisao); colisao = 0;
    }

    return 0;
}
