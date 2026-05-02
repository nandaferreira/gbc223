#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d %d",&A, &B);

    if (A == 0) {
        printf("C\n");
    } 
    else if (B == 0) {
        printf("B\n");
    } 
    else {
        printf("A\n");
    }

    return 0;
}