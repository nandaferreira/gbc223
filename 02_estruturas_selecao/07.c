#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
    int C, P, F;

    scanf("%d %d %d", &C, &P, &F);

    if(C * F <= P){
        printf("S");
    } else {
        printf("N");
    }
    return 0;
}
