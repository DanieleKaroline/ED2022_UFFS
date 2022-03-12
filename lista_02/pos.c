#include <stdio.h>
int main()
{
   int i, n, p, m;
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
       
    m = v[0];

    for(i = 1; i < n; i ++)
    {
        if(m > v[i])
        {
            m = v[i];
            p = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", m, p);
    return 0;
}