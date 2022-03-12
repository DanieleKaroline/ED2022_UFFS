#include <stdio.h>
 
int main() {
   int i, vet[10];
   for(i = 0 ; i < 10; i++){
       scanf("%d", &vet[i]);
   }
    for(i = 0; i < 10; i++){
        if(vet[i] <= 0){
            vet[i] = 1;
        }
    printf("X[%d] = %d\n", i, vet[i]);
    }

    return 0;
}