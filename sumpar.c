#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[80];
    int a, b;

    fgets(s, sizeof(s), stdin);
    a = atoi(s);
    fgets(s, sizeof(s), stdin);
    b = atoi(s);

    printf("%i+%i =%i\n", a, b, a+b);
    return 0;

    }