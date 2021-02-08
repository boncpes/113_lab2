#include<stdio.h>
int main()
{
    int n[3],i,j,t,m=0,a,b,c;
    char ap[3],as[3]={'C','B','A'};
        scanf("%d %d %d",&n[0],&n[1],&n[2]);
        scanf("%c%c%c",&ap[0],&ap[1],&ap[2]);
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

    return 0;
}
