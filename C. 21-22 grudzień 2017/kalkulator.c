// Pawel Kowieski
// Informatyka grupa 2
	
#include <stdio.h>
#include <stdlib.h>

double dodawanie(double a, double b)
{return a+b;}

double odejmowanie(double a, double b)
{return a-b;}

double mnozenie(double a, double b)
{return a*b;}

double dzielenie(double a, double b)
{return a/b;}

double kalkulator(double a, double b, char wybor)
{		
	switch (wybor){
		case '+':
			return dodawanie(a,b);
		case '-':
			return odejmowanie(a,b);
		case '*': 
			return mnozenie(a,b);
		case '/':
			return dzielenie(a,b);
		case 'q':
			exit(0);
		default:
			printf("Nieprawilowy wybor dzialania!\n");
			return 0;
			}
}

int main()
{
	double a,b;
	char wybor;
	printf("\nWitaj! Jestem kalkulatorem\n\n");
	
	while(1){	
		printf("Podaj wartosc a: \n");
		scanf(" %lf",&a);
		printf("Podaj wartosc b: \n");
		scanf(" %lf",&b);
		printf("Podaj dzialanie, ktore chcesz wykonac:\n '+' - dodawanie, '-' - odejmowanie, '*' = mnozenie, '/' - dzielenie, q - WYJSCIE!\n");
		scanf(" %c",&wybor);
		printf("\n\tWynik = %f\n", kalkulator(a,b,wybor));
		printf("--------------------------------------------------------------------------\n");
	}	
	
	return 0;
}


