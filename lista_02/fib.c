#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, c = 0, t;
   
    scanf("%d", &t);

    for(i = 1; i < t; i++){
        if(i%2 == 1){
            printf("%d ", c);
            c = a + b;
            a = c;
        }
        else if(i == 2){
            printf("%d ", c);
        }
        else if(i%2 == 0){
            printf("%d ", c);
            c = a+b;
            b = c;
        }
    }
    printf("%d\n", c);
    
    
    return 0;
}