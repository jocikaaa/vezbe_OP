/* Zbirka strana 68, zadatak 1*/
#include <stdio.h>

main()
{
	
	int indeks = 0, odredjenIndeks = 0;
	int razlika = 0, cachedRazlika = 0;
	int duzinaNiza = 0;
	int brojUpo, brojZaNiz, odabrani;
	int min = 1, max = 10;

	
	printf("Unesite broj cija ce se vrednost uporedjivati: ");
	scanf("%d", &brojUpo);

	while(1)
	{
		printf("Unesite duzinu niza: ");
		scanf("%d", &duzinaNiza);

		if(duzinaNiza == 0)
		{
			break;		
		}

		if(duzinaNiza < min || duzinaNiza > max)
		{
			printf("Unet je broj van Opsega, ponovite unos.\n");
			continue;
		}

		sekcijaUnos:
		razlika = 0;
		printf("Sada unesite broj za niz: ");
		scanf("%d", &brojZaNiz);
		indeks ++;
		razlika = brojUpo - brojZaNiz;
		
		if(razlika < 0)
		{
			razlika += razlika * (-2);
		}

		if(cachedRazlika == 0 || cachedRazlika > razlika)
		{
			cachedRazlika = razlika;
			odredjenIndeks = indeks;
			odabrani = brojZaNiz;
		}					
		
		if(indeks == duzinaNiza)
		{
			break;
		}
		else
		{
			goto sekcijaUnos;
		}

	}

	if(duzinaNiza == 0)
		goto sekcijaTerminate;

	printf("Indeks broja je %d, i to je broj %d", odredjenIndeks, odabrani);

	sekcijaTerminate:
	printf("\n\nProgram Zavrsen!\n");
	
}

