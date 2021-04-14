#include <stdio.h>
#include <stdlib.h>

//determina se l'anno inserito da tastiera è bisestile oppure no

int main(){
    char s[80];
    int y;

    fgets(s, sizeof(s), stdin);
    y = atoi(s);

    if (((y%4 == 0) && ! (y%100 == 0 )) || (y%400 == 0))
     printf("Il %d e' bisestile. \n",y);
    else
     printf("Il %d non e' bisestile. \n",y);
    return 0;
}

