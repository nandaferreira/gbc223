#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int T1, T2, T3, T4;
    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);

    if(T1 < 2 || T1 > 6 || T2 < 2 || T2 > 6 ||
       T3 < 2 || T3 > 6 || T4 < 2 || T4 > 6){
        return -1;
    }

    int totalNotebooks = (T1 + T2 + T3 + T4) - 3;
    printf("%d", totalNotebooks);
    return 0;
}