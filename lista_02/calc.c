#include <string.h>

int getNum(char l) {
    switch (l) {
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        default:
            return 0;
            break;
    }
}

int main() {
    
    int n, i, t1, t2, t3;
    scanf("%d ", &n);
    
    while (n--) {
        char p[14];
        gets(p);
        
        t1 = getNum(p[2])*10 + getNum(p[3]);
        t2 = getNum(p[5])*100 + getNum(p[6])*10 + getNum(p[7]);
        t3 = getNum(p[11])*10 + getNum(p[12]);
        printf("%d\n", t1 + t2 + t3);
    }

    return 0;
}