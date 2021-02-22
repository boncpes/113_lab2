#include <stdio.h>
#include <math.h>
double f(int x)
{
    int i = 0;
    int a = (int)floor(20+10sin(x/3.14159));
    for(i=0 ; i<a ; i++)
        printf(" ");
    printf("\n");
    return a;
}
void main()
{
    int x;
    printf(" x | f(x)\n");
    printf("---+---------------------------------->y\n");
    for (x = 0; x <= 20; x++)
    {
        f(x);
        printf("%2d |\n", x);
    }
}
