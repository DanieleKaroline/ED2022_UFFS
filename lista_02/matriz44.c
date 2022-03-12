#include <stdio.h>
int main()
{
    int m[4][4]= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}}, i;
    for(i = 0; i < 4; i++){
        printf("%d ", m[0][0]);
        printf("%d ", m[i][i+1]);
    }
    return 0;
}