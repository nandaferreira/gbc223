#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int D;
    scanf("%d", &D);
    int cesta = 0;
    
    if(D < 0 || D > 2000){
        return -1;
    }else{
        if (D <= 800){
            cesta = cesta +1;
        }
        else if(D > 800 && D <= 1400){
            cesta = cesta +2;
        }
        else if(D > 1400 && D <= 2000){
            cesta = cesta +3;
        }
    }
    
    printf("%d", cesta);

    return 0;
}