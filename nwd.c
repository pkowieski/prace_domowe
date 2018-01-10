#include <stdio.h>

int nwd(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=a%b;
        	a=b;
        	b=c;
    	}
    	return a;
}

int main()
{
	int a,b;
	printf("Program obliczajacy największy wspólny dzielnik dwóch liczb\n");
	printf("Podaj a = "); scanf("%d", &a);
	printf("Podaj b = "); scanf("%d", &b);
	printf("NWD = %d\n",nwd(a,b));
	return 0;
}
