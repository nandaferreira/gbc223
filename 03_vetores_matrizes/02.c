//Matrix Vector Multiplication
#include <stdio.h>

int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    if(n < 1 || m < 1 || n > 100 || m > 100){
        return -1;
    }

    int matrizA[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    int vetorB[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &vetorB[i]);
    }

    int vetorC[n];
    for(int i = 0; i < n; i++){
        vetorC[i] = 0;
        for(int j = 0; j < m; j++){
            vetorC[i] += matrizA[i][j] * vetorB[j];
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", vetorC[i]);
    }
    return 0;
}
