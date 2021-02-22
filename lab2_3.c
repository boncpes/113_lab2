#include<stdio.h>
int main()
{
    int n[3],i,j,t=0;
    char a,b,c;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    getchar();
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
    if(a=='A')
        printf("%d ",n[0]);
    else if(a=='B')
        printf("%d ",n[1]);
    else if(a=='C')
        printf("%d ",n[2]);

    if(b=='A')
        printf("%d ",n[0]);
    else if(b=='B')
        printf("%d ",n[1]);
    else if(b=='C')
        printf("%d ",n[2]);

    if(c=='A')
        printf("%d ",n[0]);
    else if(c=='B')
        printf("%d ",n[1]);
    else if(c=='C')
        printf("%d ",n[2]);

    return 0;
}
