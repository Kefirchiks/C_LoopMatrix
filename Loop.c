/************************************************************************
*   Written in C                                                        *
*          by Klâvs Ceicâns                                             *
*               (Github - Kefirchiks | https://github.com/Kefirchiks )  *
*************************************************************************
*       SHARING IS CARING                                               *
*************************************************************************
*       Programma atrod visus nepâra skaitïus                           *
*       intervâlâ no 0 lîdz N, to summu, kur N ievada lietotajs         *
************************************************************************/
#pragma hdrstop

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	long n, a, sum; // all odd number sum
	char exit;
	do {
		clrscr(); // Clear screen
		sum = 0;
		// Prints out given task conditions
		printf("\nProgramma atrod visus nepara skaitlus intervala \nno 0 lidz N summu, kur N ievada lietotajs \n"
			);
		// Asks you to type value of N
		printf("\n Ievadiet N:\t");
		// Read N
		scanf("%ld", &n);
		// Check if N < 0 & prints out subtotal value
		while (n < 0) {
			printf("\nN vertiba ndrikst but mazaka par 0\n");
			printf(" Ievadiet N:\t");
			scanf("%ld", &n);
		}
		// Loop, which checks if a is a balance, if not, then calculates sum
		switch (n) {
		case 0: {
				printf("\nSaja intervala nav nepara skaitlu!");
				break;
			}
		default: {
				printf("\nStarprezultats:\n");
				for (a = 0; a <= n; a++)
					if ((a % 2) != 0) {
						printf("\n%d+%d=", sum, a);
						sum = sum + a;
						printf("%ld", sum);
					}

				// Print out sum
				printf("\n\nVisu nepara skaitlu summa no 0 lidz %d ir %ld\n",
					n, sum);
			}
		}
		// Repeat program?
		printf("\nLai atkartotu nospiediet Y, lai izietu jebkuru citu taustinu:\t"
			);
		flushall(); // Clear buffer
		// Reads value for repeating the program
		scanf("%c", &exit);
	}
	while ((exit == 'y') || (exit == 'Y')); // Check exit value
	return EXIT_SUCCESS;
}
