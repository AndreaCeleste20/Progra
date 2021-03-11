
#include <stdio.h>		/*Helped by Edga de la Rosa*/
#define T 1
#define F 0

int
main ()
{
  int x, n = F, o = F;

  while ((x = getchar ()) != EOF)
  {
    switch (x)
      {
      case '(':
	o = T;
	putchar (x);
	break;
      case ')':
	o = F;
	putchar (x);
	break;
      case '<':
	o = T;
	putchar (x);
	break;
      case '>':
	o = F;
	putchar (x);
	break;
      case '{':
	o = T;
	putchar (x);
	break;
      case '}':
	o = F;
	putchar (x);
	break;
      case '[':
	o = T;
	putchar (x);
	break;
      case ']':
	o = F;
	putchar (x);
	break;

      default:
	if (x != '.' && x != ':' && x != '\?' && x != '!' && x != '-'
	    && x != ';' && x != '_')
	  {
	    if (o == T)
	      {
		putchar (x);
	      }
	    else
	      {
		if (x == '1' || x == '2' || x == '3' || x == '4' || x == '5'
		    || x == '6' || x == '7' || x == '8' || x == '9'
		    || x == '0')
		  {
		    n++;
		  }
		else
		  {
		    n = 0;
		  }
		if (n == 1)
		  {
		    putchar ('X');
		  }
		if (n == 0)
		  {
		    putchar (x);
		  }
	      }
	  }
      }

  }
  return 0;
}
