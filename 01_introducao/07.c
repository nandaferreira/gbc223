#include <stdio.h>
#include <stdlib.h>

int main(){    	

    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);
    int areaRetangulo;
    
    if(A < 1 || A > 1000 || B < 1 || B > 1000){
        return -1;
    }else{
        areaRetangulo = A*B;
    }

    printf("%d", areaRetangulo);

    return 0;
}
