#include <stdio.h>

#define MIN 5
#define MAX 15

main() {
    int i, j, k, n, znak, slovo, praznih;

    do {
        printf("\nZnak: ");
        znak = getchar();
        getchar();
    }while(znak != '*' && znak != '+');

    do {
        printf("\nNeparan Broj n (u posegu od %d do %d): ", MIN, MAX);
        scanf("%d", &n);
    }while(n < MIN || n > MAX || !(n % 2));

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            putchar(znak);
        }
        putchar('\n');
    }
    putchar('\n');

    for(i = 1; i <= (n + 2); i++) {
        putchar(znak);
    }
    putchar('\n');

    putchar(znak);
    for(slovo = 'a', j = 1; slovo <= 'z'; slovo++, j++) {
        putchar(slovo);
        if(slovo == 'z') {
            for(k = j; k < n; k++, j++) {
                putchar(' ');
            }
        }
        if(j == n) {
            j = 0;
            putchar(znak);
            putchar('\n');
            putchar(znak);
        }
    }

    for(i = 2; i <= (n + 2); i++) {
        putchar(znak);
    }
    putchar('\n');

}

