#include <stdio.h>
#include "Datos.h"

char *a;			/* "Variable que cambiara dependiendo de lo que quiera pedir" */
char *b;			/* "" */
char *z;			/* "" */

void REGISTRO (h)
{
  H = 0;
  n = 0;
  printf ("How many %s will be register? ", a);
  scanf ("%d", &q);
  while (q > n)
    {
      n++;			/*contador */
      printf ("Write the %s #%d%s:\n", b, n, z);
      scanf ("%d", &h);
      H = H + h;		/* Suma de los datos recaudados */
    }
}
