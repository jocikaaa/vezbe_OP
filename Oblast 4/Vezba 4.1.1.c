#include <stdio.h>


main()
{
	int a, b;
	int parni = 0;
	int neparni = 0;

	printf("Unesite dva cela broja za formiranje opsega: ");
	scanf("%d %d", &a, &b);

	for(a; a<b; a++)
	{
		if(a % 2 == 0)
		{
			parni += a * a;
		}
		else
		{
			neparni += a * a * a; 
		}
	}

	printf("\n\nSuma Parnih:\t %d \nSuma Neparnih: \t%d\n\n", parni, neparni);





}