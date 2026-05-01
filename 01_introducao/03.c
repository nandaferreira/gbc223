#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	double A, B;
	scanf("%lf",&A);
	scanf("%lf",&B);

    double divisao;

    divisao = A/B;

    printf("%.2lf", divisao);

    return 0;
}