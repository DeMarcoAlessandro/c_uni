#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {

    char s [80];
    double a, b, r;
    int sel;
    char op;

    puts("inserire due valori separati da invio");
    fgets(s, sizeof(s),stdin);
    a = atof(s);
    fgets(s, sizeof(s),stdin);
    b = atof(s);

    puts ("Operazione: 1) + 2) -");
    puts ("            3) + 4) / 5) percentuale");

    fgets (s, sizeof(s), stdin);
    sel = atoi(s);

    switch (sel){
        case 1:
           r=a+b;
           op = '+';
           break;
        case 2:
           r = a-b;
           op = '-';
           break;
        case 3:
           r=a*b;
           op = '*';
           break;
        case 4:
           if (b!=0)
           {
               r= a/b;
           }
           else
           {
               puts("impossibile dividere per zero");
           }
           op = '/';
           break;
        case 5:
           r = (a/100)*b;
           op = '%';
           break;
        default:
           break;
    }
printf("%lf %c %lf = %lf",a,op,b,r);
return 0;

}