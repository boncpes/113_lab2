#include<stdio.h>
int main()
{
    int n[3],i,j,t=0;
    char a,b,c;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    fflush(stdin);
    scanf("%c%c%c",&a,&b,&c);
    while(1)
    {
        int k=0;
        for(i=0; i<2; i++)
        {
            if(n[i]>n[i+1])
                k++;
        }
        for(i=0; i<2; i++)
        {
            if(n[i]>n[i+1])
            {
                t=n[i];
                n[i]=n[i+1];
                n[i+1]=t;
            }
        }
        if(k==0)
            break;
    }
    switch(a)
        {
        case 'A':
            printf("%d ",n[0]);
            break;
        case 'B':
            printf("%d ",n[1]);
            break;
        case 'C':
            printf("%d ",n[2]);
            break;
        }
    switch(b)
        {
        case 'A':
            printf("%d ",n[0]);
            break;
        case 'B':
            printf("%d ",n[1]);
            break;
        case 'C':
            printf("%d ",n[2]);
            break;
        }
    switch(c)
        {
        case 'A':
            printf("%d ",n[0]);
            break;
        case 'B':
            printf("%d ",n[1]);
            break;
        case 'C':
            printf("%d ",n[2]);
            break;
        }
    return 0;
}
