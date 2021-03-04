
#include <stdio.h>

#define L   0
#define U   300
#define S   20

main ()
{
  int f;

  for (f = L; f <= U; f = f + S)
    printf ("%3d%6.1f\n", f, (5.0 / 9.0) * (f - 32));
}
