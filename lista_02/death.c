#include <stdio.h>
#include <string.h>
 
int main() {
    int b, i, c;
    char s[1020];

    c = 0;

    scanf("%d", &b);

    for(i = 0; i < b; i++){
        scanf("%s", &s);

        if(strstr(s, "CD") != NULL){
            c++;
        }
    }
    printf("%d\n", b - c);
    return 0;
}