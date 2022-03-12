#include <stdio.h>

int main()
{
    int tn;
    struct{
        int dia;
        int mes;
        int ano;
    };
    struct data1 = {10, 11, 2002};
        data2 = {19, 7, 2002};
    
    struct{
        int id;
        char nome[tn+1];
        double sal;
        }f1 = {99, "Luiz Ricardo", 1200.00}, 
        f2 = {10, "Ana Lucia", 3000.00};
   
    printf("ID: %d\n Nome: %s\n", f1.id, f1.nome);
    printf("ID: %d\n Nome: %s\n", f2.id, f2.nome);

   return 0;
}