/* Zbirka strana 35, zadatak 1*/

#include <stdio.h>



main()
{
	char karakter;

	printf("Da li zelite da nastavite? (Napisati D za Da, i N za Ne.): ");
	scanf("%c", &karakter);

	if(karakter == 'D')
	{
		printf("\n\nProgram ce nastaviti sa radom :)\n\n");
	}
	else if(karakter == 'N')
	{
		printf("\n\nProgram nece nastaviti sa radom :(\n\n");
	}
	else
	{
		printf("\n\nNije izabrana nijedna validna opcija! >:(\n\n");
	}

	

	
}

