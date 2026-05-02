#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int A, B, C, maior;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if(abs(A) > 1000 || abs(B) > 1000 || abs(C) > 1000){
        return -1;
    }

    maior = A;
    if(B > maior) maior = B;
    if(C > maior) maior = C;

    printf("%d", maior);

    return 0;
}
