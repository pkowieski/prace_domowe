#include <stdio.h>
#include <math.h>



int main()

{
	puts("Jestem kalkulatorem rownan kwadratowych ax^2 + bx + c = 0");
	float a,b,c,delta;
	printf("Podaj wartosc argumentu a: "); scanf("%e", &a);
	printf("Podaj wartosc argumentu b: "); scanf("%e", &b);
	printf("Podaj wartosc argumentu c: "); scanf("%e", &c);
	delta=(b*b)-(4*a*c);
	if(a==0){puts("'a' musi byæ ROZNE od zera!");}
	else{	if(delta>0){printf("Rownanie ma dwa rozwiazania: x1 = %.2f x2 = %.2f\n", (-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));}
		else if(delta==0){printf("Rownanie ma jedno rozwiazanie: x = %.2f\n", -b/(2*a));}
		else if(delta<0){printf("Rownanie nie ma rozwiazan rzeczywistych!\n");}
	}
return 0;

}
