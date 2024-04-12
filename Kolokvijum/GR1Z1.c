#include <stdio.h>
#define N 32
#define MASKA 0x0f

int main()
{	
	
	int x,y;
	int pojY, modX, cifreX; // pojavljivanje Y unutar X, X za deljenje i broj Cifara X
	int bin;
	int i;

	printf("Unesite broj x i y (Oba pozitivna, y u opsegu od 0 do 9)");
	scanf("%d%d", &x, &y);
	
	printf("\nDecimalni oblik - X:%d, Y:%d\n", x, y);
	printf("Heksadecimalni oblik - X:%X, Y:%X\n", x, y);

	if(y >= 0 && y <= 9)
	{
		modX = x;
		while(modX)
		{
			if(modX%10 == y)
			{
				pojY ++;
			}
			cifreX++;
			modX /= 10;
		}

		modX = x;
		for(i = 0; i < N; i++)
		{
			if((modX & MASKA) == y)
			{
				bin++;
			}
			modX /= 2;
		}
		printf("\nX ima %d Cifara", cifreX);
		printf("\nCifra %d, se moze naci %d puta unutar X", y, pojY);
		printf("\n%d Puta mozemo naci binarni oblik Y unutar X", bin);
	}
	else
	{
		printf("Y je van opsega.");
	}
	
	printf("\n\nProgram Zavrsen.\n");
}
