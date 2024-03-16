/* Zbirka strana 21, zadatak 2*/

#include <stdio.h>



main()
{
	int x;

	printf("\nUnesite ceo broj: ");
	scanf("%d", &x);

	printf("\n%-10d", x);
	printf("\n%010d", x);
	printf("\n%10d\n\n", x);
}

/*Ukoliko se trazi poravnanje uz neku od margina, a pritom se ispred broja MORAJU NALAZITI NULE,
samo treba ispred sirine polja dodati 0, i to je to.
