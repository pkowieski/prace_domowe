#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool czy_znak(char znak)
{
	if((znak>='a'&&znak<='z')||(znak>='A'&&znak<='Z'))
		return true;
	else
		return false;
}

void zlicz(char* ciag, int* histogram)
{
	int i=0;
	while(ciag[i])
	{
		if(czy_znak(ciag[i]));
		{
			if(ciag[i]>='a')
				histogram[ciag[i]-'a']++;
			else
				histogram[ciag[i]-'A']++;
		}
		i++;
	}
}

void wypisz(int* histogram)
{
	int i;
	for(i=0;i<26;i++){
		printf("%c - %d \n",'a'+i, histogram[i]);
	}
}

int main()
{
	char* ciag="Ala ma kota, a kot ma Ale.";
	int histogram[26]={0};
	zlicz(ciag,histogram);
	wypisz(histogram);

}
