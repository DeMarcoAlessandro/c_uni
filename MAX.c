#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

char s [200];
int a,b,c, max;

fgets(s, sizeof(s), stdin);
a = atoi(s);

fgets(s, sizeof(s), stdin);
b = atoi(s);

fgets(s, sizeof(s), stdin);
c = atoi(s);

max = a;

if (b>max)
{
    max=b;
    return 0;
}

if (c=max)
{
    max = c;
    return 0;
}
printf("%i:e' il massimo\n", max);
return 0; 
}