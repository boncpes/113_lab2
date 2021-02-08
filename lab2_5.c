#include<stdio.h>
int main()
{
    int n,re,sum,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        re=n%10;
        sum=sum*10+re;
        n=n/10;
    }
    while(sum!=0)
    {
        re=sum%10;
        if(i>0)
            printf("-");
        switch(re)
        {
        case 0:
            printf("Zero");
            break;

        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("Four");

            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;
        }
        i++;
        sum=sum/10;
    }
    return 0;
}
