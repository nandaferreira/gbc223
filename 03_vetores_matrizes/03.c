#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int vet[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);}

    int pontuacao = vet[k - 1];

    for(int i = 0; i < n; i++){
        if(vet[i] >= pontuacao && vet[i] > 0){
            count++;
        }
    }

    printf("%d", count);
}