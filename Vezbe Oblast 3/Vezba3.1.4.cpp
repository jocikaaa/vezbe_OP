/* Zbirka strana 34, zadatak 4*/

#include <stdio.h>



int main()
{
	int a, b, c, d;

	printf("Unesite vrednosti za brojeve A, B i C: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Unete vrednosti: A=%d, B=%d, C=%d\n\n\n", a, b, c);

	/* POD A
	if(a == b == c)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}*/

	//POD C
	if(a > 0 && a < 100 && b > 0 && b < 100 && c > 0 && c < 100)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}

	/* POD B
	if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}*/
	

	printf("Vrednost broja D je: %d\n\n", d);
	
}
/* Sto se same strukture programa tice, od nas se trazi da proverimo vrednosti promenljivih A B i C i da na osnovu toga izvedemo odredjeni zadatak, to jest da promenljivoj D 
damo vrednost 1 ili 0. Pod A je jednostavna provera jednakosti. Pod B proveravamo da li su brojevi parni, a to radimo tako sto koristimo operand % to jest deljenje sa
ostatkom. Delimo brojem 2. Pod C je kompleksnije jer proveravamo po 2 stvari po broju, to jest da li je manji od 100 i da li je pozitivan (veci od 0).*/

/* NAREDBE za kontrolu toka programa su tu da kontrolisu sta ce se dogoditi dalje sa programom. Unutar zagrada posle naredbe se pise uslov koji zelimo da ispitamo
na primer da li je neki broj veci ili manji od drugog? Sa IF/ELSE naredbom, tok je jednostavan. Program prvo proverava uslov unutar IF naredbe, ukoliko je tacan, onda
pokrece naredbe unutar IF bloka. Ukoliko nije program nastavlja na ELSE naredbu i onda pokrece ono sto se nalazi u tom bloku. */


