#include<stdio.h>
int main()
{
    char pro;
    float t,sum,s,m;
    scanf("%c",&pro);
    scanf("%f",&t);
    if(pro == 'A')
    {
        sum = 199.00;
        if(t>200.00)
        {
            s=(int)(t-200);
            m=(t-200-s)*100;
            sum = sum + ((s+(m/60))*3);
        }

    }
    else if(pro == 'B')
    {
        sum = 299.00;
        if(t>400.00)
        {
            s=(int)(t-400);
            m=(t-400-s)*100;
            sum = sum + ((s+(m/60))*2);
        }
    }
    printf("%.2f",sum);
    return 0;
}
