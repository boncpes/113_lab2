#include<stdio.h>
int main()
{
    char n;
    int d;
    scanf("%c",&n);
    scanf("%d",&d);
    if(d%2 == 0)
    {
      if(n>=65 && n<74)
        {
            if(d==5 || d==15 || d==25)
                printf("%c{@_@}/",92);
            else
                printf("{@_@}");
        }
        else if(n>=74 && n<83)
        {
            if(d==5 || d==15 || d==25)
                printf("%c{*v*}/",92);
            else
                printf("{*v*}");
        }
        else if(n>=83 && n<91)
        {
            if(d==5 || d==15 || d==25)
                printf("%c{x_x}/",92);
            else
                printf("{x_x}");
        }
    }
    else
    {
        if(n>=65 && n<74)
        {
            if(d==5 || d==15 || d==25)
                printf("%c\(^_^)/",92);
            else
                printf("(^_^)");
        }
        else if(n>=74 && n<83)
        {
            if(d==5 || d==15 || d==25)
                printf("%c\(*o*)/",92);
            else
                printf("(*o*)");
        }
        else if(n>=83 && n<91)
        {
            if(d==5 || d==15 || d==25)
                printf("%c(T_T)/",92);
            else
                printf("(T_T)");
        }
    }
    return 0;
}
