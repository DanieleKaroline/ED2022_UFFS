#include <stdio.h>
int main()
{
    double a, b, c, o1, o2, o3; 
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a >=b && a >= c){
        o1 = a; 
        o2 = b;
        o3 = c; 
    }

    else if (b >= a && b >= c){
        o1 = b; 
        o2 = a; 
        o3 = c;
    }

    else if (c>=a && c>=b){
        o1 = c; 
        o2 = a; 
        o3 = b;
    }

    if(o1>=o2+o3){
        printf("NAO FORMA TRIANGULO\n");
    }
    
    else{
    if(o1*o1 == o2*o2 + o3*o3){
        printf("TRIANGULO RETANGULO\n");
    }

    if(o1*o1 > o2*o2 + o3*o3){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if(o1*o1 < o2*o2 + o3*o3){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(o1==o2 && o2==o3){
        printf("TRIANGULO EQUILATERO\n");
    }
    
    if (o1 == o2 && o1!=o3 && o3!= o2){ 
		printf ("TRIANGULO ISOSCELES\n");
	}

	if (o2==o3 && o1!= o2 && o1!=o3){
		printf ("TRIANGULO ISOSCELES\n");
	}

	if (o1 == o3 && o3!= o2 && o1 != o2){
		printf ("TRIANGULO ISOSCELES\n");
	}

    }
    return 0;
}