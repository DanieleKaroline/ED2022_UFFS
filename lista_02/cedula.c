#include <stdio.h>
int main()
{
   int v;
   scanf("%d", &v);
   printf("%d\n", v);
   int cem = v/100;
   v = v-cem*100;

   int cq = v/50;
   v = v-cq*50;

   int vnt = v/20;
   v = v-vnt*20;
   
   int dez = v/10;
   v = v-dez*10;

   int cinco = v/5;
   v = v-cinco*5;
   
   int dois = v/2;
   v = v-dois*2;

   int um = v/1;
   v = v-um*1;

   printf("%d nota(s) de R$ 100,00\n", cem);
   printf("%d nota(s) de R$ 50,00\n", cq);
   printf("%d nota(s) de R$ 20,00\n", vnt);
   printf("%d nota(s) de R$ 10,00\n", dez);
   printf("%d nota(s) de R$ 5,00\n", cinco);
   printf("%d nota(s) de R$ 2,00\n", dois);
   printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}