#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if(X < -100 && X > 100 || Y < -100 || Y > 100){
        return -1;
    }else{
        if(X == 0 || Y == 0){
            printf("eixos");
        }else if(X > 0 && Y > 0){
            printf("Q1");
        }else if(X < 0 && Y > 0){
            printf("Q2");
        }else if(X < 0 && Y < 0){
            printf("Q3");
        }else if(X > 0 && Y < 0){
            printf("Q4");
        }
    }
}