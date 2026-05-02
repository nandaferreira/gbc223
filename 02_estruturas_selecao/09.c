#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int P1, C1, P2, C2;
	scanf("%d %d %d %d",&P1, &C1, &P2, &C2);
    
    int lado1 = P1 * C1;
    int lado2 = P2 * C2;

    if(lado1 == lado2){
        printf("0");
    } else if(lado1 > lado2){
        printf("-1");
    } else {
        printf("1");
    }
    return 0;
}