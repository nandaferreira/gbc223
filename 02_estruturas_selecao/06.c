#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, M;
	scanf("%d",&A);
	scanf("%d",&M);

    if(A < 1 || A > 50 || M < 1 || M > 50){
        return -1;
    }
    if(A + M <= 50){
        printf("S");
    } else {
        printf("N");
    }
    return 0;
}