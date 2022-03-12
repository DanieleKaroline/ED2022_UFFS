#include <stdio.h>
 
int main() {
    int i, n, j, v[1000];
    scanf("%d", &n);
    for(i = 0, j = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, j);
        j++;
        if(j == n){
            j = 0;
        }
    }

    return 0;
}