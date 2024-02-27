/* Zbirka strana 21, zadatak 1*/

#include <stdio.h>



int main()
{
	printf("\nVelicina tipa int je:\t %dB", sizeof(int));
	printf("\nVelicina tipa long je:\t %dB", sizeof(long));
	printf("\nVelicina tipa short je:\t %dB", sizeof(short));
	printf("\nVelicina tipa float je:\t %dB\n\n", sizeof(float));
}

/*Metod SIZEOF prihvata jedan parametar (Tip promenljive) i vraca vrednost
koja je jednaka velicini te promenljive u bajtovima.*/
