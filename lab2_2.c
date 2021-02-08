#include<stdio.h>
int main()
{
    char pro;
    float t,sum;
    int s,m;
    scanf("%c",&pro);
    scanf("%f",&t);
    m=(int)t;
    s=(t-m)*100.0;
    printf("%d\n",s);
    printf("%d\n",m);
    if(pro == 'A')
    {
        sum = 199.00;
        if(m>200.00)
        {
            sum += s*(0.05);
        }

    }
    else if(pro == 'B')
    {
    }
    printf("%d",sum);
    return 0;
}
