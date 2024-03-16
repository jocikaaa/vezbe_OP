/* Zbirka strana 7, zadatak 3*/

#include <stdio.h>
#define MAX 30 // Pomocu #define, mi definisemo neku konstantu i njenu vrednost. Gde god se unutar programa upotrebi MAX, vrednost ce biti zamenjena onom vrednoscu koju ovde zadamo.

main()
{
	printf("\nPrva recenica.\n\tDruga recenica.\n\t\tTreca recenica.\n\n");
}

/* Posto se u zadatku trazi da samo jednom iskoristimo funkciju
printf, potrebno je koristiti \n i \t da bi se izvela vezba.
Druga recenica je pomerena za JEDAN tabulator, pa zato imamo samo jedan
\t. Treca je, sa druge strane pomerena za DVA tabulatora pa imamo dva puta
\t. Izmedju je stavljen \n da bi prebacili Recenice u sledeci red. */
