#include <stdio.h>


unsigned int fib(int n)
{
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
    	printf("Podaj numer wyrazu  wyrazow ciągu Fibonacciego, który mam obliczyć: \n");
	scanf("%d", &n);

       	printf("\n\nWartosc numeru wyrazu, ktory podales wynosi = %d\n", fib(n));


	return(0);
}
