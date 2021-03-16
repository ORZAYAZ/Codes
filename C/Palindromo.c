#include <stdio.h>
#include <ctype.h>
#include <string.h>

static void check (char *s)
{
  int i = 0;
  int contador = 0;
  int j = strlen(s) -1;

  for (i = 0; i < strlen(s); i++)
  {
    s[i] = tolower(s[i]);
  }

  for (i = 0; i < strlen(s); i++)
  {
    if (s[i] == s[j])
    {
      contador++;
      j--;
    }
  }

  if (contador == strlen(s))
  {
    printf ("SIM\n");
  }

  else
  {
    printf ("NAO\n");
  }

}

int main ()
{
  int i = 0;
  int q;
  scanf("%d",&q);
  char s [30];
  do
  {
    scanf ("%s", s);
    check (s);
    i++;
  } while (i < q);
  return 0;
}
