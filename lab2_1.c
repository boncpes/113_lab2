#include <stdio.h>
int main()
{
    int a,b,c,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    g=a+b+c;
    if(g>=80 && g<101)
        printf("A");
    else if(g>=75 && g<80)
        printf("B+");
    else if(g>=70 && g<75)
        printf("B");
    else if(g>=65 && g<70)
        printf("C+");
    else if(g>=60 && g<=65)
        printf("C");
    else if(g>=55 && g<=60)
        printf("D+");
    else if(g>=50 && g<=55)
        printf("D");
    else if(g>=0 && g<=50)
        printf("F");
    return 0;
}
