#include <stdio.h>
#include <stdlib.h>

// determinare se il valore iserito è pari o dispari (versione 2)
int main(){

  char s[80];
  int i;

  fgets(s, sizeof(s), stdin);
  i = atoi(s);

  if ( i%2)
     printf("%i: dispari\n", i);
  else
     printf("%i; pari\n", i);

return 0;
}