/* Zbirka strana 19, zadatak 1*/

#include <stdio.h>



main()
{
	int x; //Deklarisemo promenljivu x, to jest rezervisemo mesto u memoriji za nju.

	printf("\nUnesite ceo broj:");
	scanf("%d", &x);  // Zadatak trazi da se broj unese preko tastature tako da treba da koristimo funkciju scanf.

	printf("\nDecimalni oblik broja je:\t %d", x);						
	printf("\nOktalni oblik broja je:\t\t %o", x);	
	printf("\nHeksadecimalni oblik broja je:\t %x, %X\n\n", x, x);

	// Posto se trazi da ispisemo 3 razlicita oblika, koristimo printf. Za oktalni broj format je %o, a za heksadecimalni %x. Veliko slovo heksadecimalnog je samo veliko X umesto malog.
}

/*Funkcija SCANF sluzi da se cita unos sa tastature, i da se taj unos sacuva u promenljivoj kojoj odaberemo.
Kao i PRINTF, SCANF ima formate koji se moraju koristiti u zavisnosti od tipa podataka koji se unose 
(na primer ako se trazi unos celog broja onda %d, oktalnog %o i tako dalje...)*/
