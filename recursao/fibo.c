#include <stdio.h>

int fibo(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int n;

    printf("Digite n: \n");
    scanf("%d", &n);
    printf("Fibo: %d", fibo(n));
    return 0;
}