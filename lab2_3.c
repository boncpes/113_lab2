#include<stdio.h>
int main()
{
    int n[3],i,j,t,m,a,b,c;
    for(i=0; i<3; i++)
        scanf("%d",&n[i]);
    for(i=1; i<3; i++)
    {
        for(j=0; j<i; j++)
        {
            if(n[j]>n[i])
            {
                m=n[i]
                  for(t=i; i>=j; t--)
                      n[t]=n[t-1];
                n[j]=m;
            }
        }
    }
    return 0;
}
