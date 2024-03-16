/* Zbirka strana 34, zadatak 5*/

#include <stdio.h>



main()
{
	int x, y;

	printf("Unesite vrednost X: ");
	scanf("%d", &x);
	printf("\n\n\nUneta je vrednost: %d\n", x);

	if(x < 0)
	{
		y = -10;
	}
	
	if(x >= 0 && x < 10)
	{
		y = x;
	}
	
	if(x >= 10)
	{
		y = x - 10;
	}

	printf("Vrednost broja Y je: %d\n\n", y);

	
}

/*Ovaj zadatak je se mogao resiti i sa ELSE IF naredbama, kako je vama lakse ili kako se trazi u zadatku, nema prevelike razlike, samo u sintaksi. Program
ignorise IF naredbe ukoliko njihov uslov nije tacan i prelazi na sledecu.*/
