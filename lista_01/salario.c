#include <stdio.h>
 
int main() {
    int cod, hr;
    float rb, sal;

    scanf("%d%d%f", &cod, &hr, &rb);
    sal = rb * hr;

    printf("NUMBER = %d\n", cod);
    printf("SALARY = U$ %.2f\n", sal);
    return 0;
}