#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int C;
    scanf("%d", &C);
    
    if(C < 0 || C > 10000){
        return -1;}

    int m100, m50, m25, m10, m5, m1, total;

    m100 = C / 100;  C = C % 100;
    m50  = C / 50;   C = C % 50;
    m25  = C / 25;   C = C % 25;
    m10  = C / 10;   C = C % 10;
    m5   = C / 5;    C = C % 5;
    m1   = C;

    total = m100 + m50 + m25 + m10 + m5 + m1;

    printf("%d\n", total);
    printf("%d\n", m100);
    printf("%d\n", m50);
    printf("%d\n", m25);
    printf("%d\n", m10);
    printf("%d\n", m5);
    printf("%d\n", m1);

    return 0;
}