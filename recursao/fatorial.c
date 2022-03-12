#include <stdio.h>

int fat(int x){
    if(x <= 1){
        return 1;
    }
    else{
        return fat(x-1)*x;
    }
}
int main(){
    int x;
    printf("Digite o valor:\n");
    scanf("%d", &x);
    printf("fatorial: %d\n", fat(x));

    return 0;
}
