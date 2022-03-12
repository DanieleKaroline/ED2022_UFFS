#include <stdio.h>
 
int main() {
   int qtd, cod, qtd2, cod2;
   float valort, valoruni, valoruni2;

    //p1
   printf("");
   scanf("%d%d%f", &cod, &qtd, &valoruni);
   //p2
   printf("");
   scanf("%d%d%f", &cod2, &qtd2, &valoruni2);

    valort = (valoruni*qtd) + (valoruni2*qtd2);
    printf("VALOR A PAGAR: R$ %.2f\n", valort);
    return 0;
}