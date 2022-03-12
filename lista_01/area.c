#include <stdio.h>
 
int main() {
    double a, b, c, ci, tr, tp, q, r;
    scanf("%lf%lf%lf", &a, &b,&c);

    //tr
    tr = (a*c)/2;
    //c
    ci = 3.14159*(c*c);
    //tp
    tp = ((a+b)*c)/2;
    //q
    q = b*b;
    //r
    r =  a*b;
    printf("TRIANGULO: %.3f\n", tr);
    printf("CIRCULO: %.3f\n", ci);
    printf("TRAPEZIO: %.3f\n", tp);
    printf("QUADRADO: %.3f\n", q);
    printf("RETANGULO: %.3f\n", r);

    return 0;
}