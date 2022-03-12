#include <stdio.h>
 
int main() {
    short nome;
    double sal, tv, st;

    scanf("%s%lf%lf", &nome, &sal, &tv);
    st = sal+(tv*0.15);
    printf("TOTAL = R$ %.2f\n", st);
    return 0;
}