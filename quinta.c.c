/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
main ()
{

  int numero[40];
  int i;
  int pares = 0;
  int impares = 0;

  for (i = 0; i < 40; i++)
    {
      printf ("O %dB: nC:mero: \n", i + 1);
      scanf ("%d", &numero[i]);

      if (numero[i] % 2 == 0)
	{
	  pares++;
	}
      else
	{
	  impares++;
	}
    }

  printf ("NC:meros pares: %d", pares);

  return 0;
}
