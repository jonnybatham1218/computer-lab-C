#include <stdio.h>
int fact (int);
int
main ()
{
  int n, factorial;

  printf ("Enter a number: ");
  scanf ("%d", &n);

  factorial = fact (n);

  printf ("Factorial is %d\n", factorial);
  return 0;
}

int
fact (int x)
{
  int f;

  if (x == 1)
    return 1;

  else
    f = x * fact (x - 1);

  return (f);
}
