#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Lendo a entrada do exercício
	int L;
	scanf("%d",&L);
    int area;
    
    if(L < 1 || L > 1000){
        return -2;
    }else{
        area = pow(L,2);
    }
    printf("%d", area);

    return 0;
}