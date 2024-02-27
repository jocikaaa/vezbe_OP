/* Zbirka strana 19, zadatak 1*/

#include <stdio.h>



main()
{
	double x; //Deklarisemo promenljivu x, to jest rezervisemo mesto u memoriji za nju. Zadatak zahteva realan broj pa koristimo tip DOUBLE.

	printf("\nUnesite realan broj: ");
	scanf("%lf", &x); //Posto je realan broj, koji moze imati i brojeve iza zareza, ne moze se koristiti %d, vec %lf.
	
	printf("\nBroj sa tri decimalna mesta:\t %10.3f", x);
	printf("\nBroj sa eksponentom:\t\t%e", x);
	printf("\nNajjednostavniji oblik:\t\t%g\n\n", x);
}

/* Ponekad se u zadatku trazi da na dodatne nacine formatirate podatke koji ce biti ispisani.
U ovom primeru pod a), trazi od nas da ostavimo sirinu polja 10, kao i da prikazemo samo 3 decimale,
bez obzira na to koliko decimala ima broj koji je korisnik uneo. Bilo koji dodatni format, se pise
izmedju znaka % i slova formata (na primer za %d izmedju % i d.)
Kada ostavljate sirinu polja, pise se ceo broj (u primeru pod a) to je broj 10).
Kada limitirate broj decimala pise se TACKA pa broj decimala koji zelite (na primer .3) */

