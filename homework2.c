
#include <stdio.h>
#include <math.h>
#define K 8


void PN (int a);		//PN=numero primo//
void BN (int b);		// BN= numero binario//

int
main ()
{
  PN (K);
  return 0;
}

void
BN (int b)			//helped by Edgar de la Rosa
{
  int i = 0;			/* El contador del codigo */
  int base[7] = { 0 };		/* numero de ceros */

  while (b > 0)			/* Saca el residuo y lo ubica en la posicion, divide el numero y aumenta la posicion */
    {
      base[i] = b % 2;		/* residuo de la division */
      b /= 2;			/* division */
      ++i;
    }
  for (int x = 6; x >= 0; --x)
    {
      printf ("%01d", base[x]);
    }
  printf ("\n");		/* al terminar de imprimir, salto de linea(tiene que ser al final si no cada digito estar{a en un renglon) */
}


void
PN (int k)
{
  int a = 1;
  int r;
  int c = 1;
  int i;

  while (k >= c)
    {
      i = 1;
      for (i++; a >= i;)
	{
	  r = a % i;
	  if (r == 0)
	    {
	      break;
	    }
	  if (r != 0)
	    {

	      for (++i; a >= i;)
		{
		  r = a % i;
		  if (r != 0 | a == i)
		    {
		      BN (a);
		      ++c;

		    }
		  break;
		}
	      break;
	    }
	}
      a++;

    }
}
