#include <stdio.h>
#include <conio.h>
#include <string.h>


int main ()
{

  int jelly = 0, rose = 0, i, len;
  char str[100];


  printf ("Enter String:\n");

  gets (str);
  len = strlen (str);
  for (i = 0; i < len; i++)
    {
      if (str[i] == 'a' && str[i ] == 'a')
    {
      jelly++;
    }
      if (str[i] == 'b' && str[i ] == 'b')
    {
      rose++;
    }
      if (jelly > 0 && rose > 0)
    {
      printf ("\nValid");
      return 0;
    }
    }
  printf ("\nInvalid");


  return 0;
}
Type a message...

