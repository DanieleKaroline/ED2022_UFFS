#include <stdio.h>
 
int main() {
    int i, n, s, v[10];

    scanf("%d", &n);

    if(n<=50){
        
        for(i = 0; i < 10; i++){
            printf("N[%d] = %d\n", i, n);
            n += n;
        }
    }
    return 0;
}