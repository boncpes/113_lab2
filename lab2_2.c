#include<stdio.h>
int main()
{
    char pro;
    float t,sum;
    int s,m;
    scanf("%c",&pro);
    scanf("%f",&t);
    m= (int)t;
    s= (t-m)*100.0;
    printf("%d\n",s);
    printf("%d\n",m);

    return 0;
}
