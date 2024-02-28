/* Zbirka strana 34, zadatak 1*/

#include <stdio.h>



main()
{
	int a=1, b=1, c=2, d=2;

	a = b++;
	c *= d;
	d *= a + b;

	printf("Vrednost a je:\t %d \nVrednost b je:\t %d \nVrednost c je:\t %d \nVrednost d je:\t %d\n\n", a,b,c,d);
	
}

/*Operatori kao sto su ++, --, su INKREMENT i DEKREMENT. Oni vrednost broja povecavaju i smanjuju za jedan.
Ukoliko zelite da smanjite broj za neku vecu vrednost koristite operator -= ili povecate +=.
Postoje postinkrement/dekrement i preinkrement/dekrement. U post-u se broj prvo koristi, pa se zatim uveca,
a u pre se uveca pa koristi. POSTOJI RAZLIKA!
Operator *= sluzi da se neki broj pomnozi sa nekom odredjenom vrednoscu.*/

