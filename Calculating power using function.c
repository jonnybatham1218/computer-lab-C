#include <stdio.h>
int power (int, int);
int
main ()
{
  int n, m;
  scanf ("%d %d", &m, &n);
  int value = power (m, n);
  printf ("%d", value);
  return 0;
}

int
power (int a, int b)
{
  int p = 1;
  for (int i = 1; i <= b; i++)
    p = a * p;
  return p;
}
