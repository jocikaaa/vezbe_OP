/* Zbirka strana 35, zadatak 3*/

#include <stdio.h>
#include <math.h>


main()
{
	
	int a, b, c;
	int max;

	printf("Unesite brojeve A, B, C: ");
	scanf("%d%d%d", &a, &b, &c);

	if(a > b && a > c)
	{
		max = a;
	}
	else if(b > a && b > c)
	{
		max = b;
	}
	else if(c > a && c > b)
	{
		max = c;
	}

	printf("\n\nNajveci broj je: %d\n\n", max);

	
}

