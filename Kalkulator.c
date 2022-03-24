#include <stdio.h>
#include <math.h>
main () {
float a, b;
char c, znak='t';
while (znak=='t'){
printf ("Wpisz dzialanie\n");
scanf ("%f %c %f", &a, &c, &b);
switch(c)
    {
    case'+':
        printf("%f+%f=%f",a,b,a+b);
        break;
    case'-':
        printf("%f-%f=%f",a,b,a-b);
        break;
    case'*':
        printf("%f*%f=%f",a,b,a*b);
        break;
    case'/':
    printf("%f+/%f=%f",a,b,a/b);
        break;
    default:
        printf("Nie ma takiej operacji");
        break;
    }
printf("czy dalej chcesz kontynuowac? wpisz t jesli chcesz\n");
scanf(" %c" ,&znak);
}
return 0;
}
