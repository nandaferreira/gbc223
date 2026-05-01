#include <stdio.h>
#include <stdlib.h>
#define pesoA 4
#define pesoB 6

int main(){    	
    int A, B, mediaPonderada;
    scanf("%d", &A);
    scanf("%d", &B);
    
    if(abs(A) > 1000 || abs(B) > 1000){
        return -1;
    } else {
        mediaPonderada = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);
        printf("%d", mediaPonderada);
    }
    return 0;
}