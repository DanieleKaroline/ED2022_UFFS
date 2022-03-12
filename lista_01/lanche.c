#include <stdio.h>
 
int main() {
    int cod, qtd;
    float total;

    scanf("%d%d", &cod, &qtd);

    if(cod == 1){
        total = qtd * 4.00;
    }
    if(cod == 2){
        total = qtd * 4.50;
    }
    if(cod == 3){
        total = qtd * 5.00;
    }
    if(cod == 4){
        total = qtd * 2.00;
    }
    if(cod == 5){
        total = qtd * 1.50;
    }

    printf("Total: R$ %.2f\n", total);
    return 0;
}