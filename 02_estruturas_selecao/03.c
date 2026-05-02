#include <stdio.h>
#include <stdlib.h>

int main(){
   int A, B, C, temp;
   
   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);
   
   if(abs(A) > 1000 || abs(B) > 1000 || abs(C) > 1000){
       return -1;
   }

   if(A > B){ temp = A; A = B; B = temp; }
   if(B > C){ temp = B; B = C; C = temp; }
   if(A > B){ temp = A; A = B; B = temp; }

   printf("%d\n", A);
   printf("%d\n", B);
   printf("%d\n", C);

   return 0;
}