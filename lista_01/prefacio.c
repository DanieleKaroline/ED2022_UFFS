#include <stdio.h>
 
int main() {
    int a, b, q, r,x,y;
    scanf("%d%d", &a, &b);
    if(a<0){
        x = b;
        if(b<0){
            x = b*-1;
        }
        for(r=0; r<x; r++){
            y = a-r;
            if(y%b==0){
                break;
            }
        }
        q = y/b;
    }
    else{
        q = a/b;
        r = a%b;
    }

    printf("%d %d\n", q, r);

    return 0;
}