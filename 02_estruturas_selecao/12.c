#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int T1, T2, T3;
    int ouro, prata, bronze;

    scanf("%d", &T1);
    scanf("%d", &T2);
    scanf("%d", &T3);

    if(T1 < T2 && T1 < T3){
        ouro = 1;
    }
    else if(T2 < T1 && T2 < T3){ouro = 2;}
    else{ouro = 3;} 

    if(T1 > T2 && T1 > T3){bronze = 1;}
    else if(T2 > T1 && T2 > T3){bronze = 2;}
    else{bronze = 3;}
    
    if(ouro != 1 && bronze != 1){prata = 1;}
    else if(ouro != 2 && bronze != 2){prata = 2;}
    else{prata = 3;}

    printf("%d\n", ouro);
    printf("%d\n", prata);
    printf("%d\n", bronze);

    return 0;
}
