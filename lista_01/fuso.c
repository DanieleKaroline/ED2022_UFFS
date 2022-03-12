#include <stdio.h>
 
int main() {
    int s, v, f;

    scanf("%d%d%d", &s, &v, &f);
    if(s == 0){
        s = 24;
    }
    s = (s+v+f)%24;
    printf("%d\n", s);
    return 0;
}