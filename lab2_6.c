#include<stdio.h>
int main()
{
    int d,m;
    scanf("%d %d",&d,&m);
    if(m==1)
        printf("%d",32+d-30);
    else if(m==2)
        printf("%d",30+d-27);
    else if(m==3)
        printf("%d",32+d-30);
    else if(m==4)
        printf("%d",31+d-29);
    else if(m==5)
        printf("%d",32+d-30);
    else if(m==6)
        printf("%d",31+d-29);
    else if(m==7)
       printf("%d",32+d-30);
    else if(m==8)
        printf("%d",32+d-30);
    else if(m==9)
        printf("%d",31+d-29);
    else if(m==10)
        printf("%d",32+d-30);
    else if(m==11)
        printf("%d",31+d-29);
    else if(m==12)
        printf("%d",32+d-30);

    return 0;
}
