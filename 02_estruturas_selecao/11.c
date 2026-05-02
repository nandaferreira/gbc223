#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);
    if((L + C) % 2 == 0){
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}