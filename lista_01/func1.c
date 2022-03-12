#include <stdio.h>
sub(int a, int b){
   return a-b;
}
int main() {
    int a, b, r;
    scanf("%d%d", &a, &b);
    r = sub(a, b);
    printf("%d", r);
    return 0;
}