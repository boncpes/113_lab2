#include<stdio.h>
int main()
{
    char pro;
    float t,sum,m,s;
    scanf("%c",&pro);
    scanf("%f",&t);
    m=(int)t;
    s=(m*60)+(t-m)*100;
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
