#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    if(abs(X) > 1000){
        return -1;
    }

    if(X > 0){
        printf("positivo");
    } else if(X < 0){
        printf("negativo");
    } else {
        printf("nulo");
    }

    return 0;
}