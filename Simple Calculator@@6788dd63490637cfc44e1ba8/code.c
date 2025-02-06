#include<stdio.h>
int main()
{
    int a,b,c;
    char o;
    scanf("%d%d%c",&a,&b,&o);
    if(o == '+')
    {
        c = a+b;
        printf("%d",c);
    }
    else if(o == '-')
    {
        printf("%d",a-b);
    }
    else if(o == '*')
    {
        printf("%d",a*b);
    }
    else if(o == '/')
    {
        printf("%d",a/b);
    }
    return 0;
}