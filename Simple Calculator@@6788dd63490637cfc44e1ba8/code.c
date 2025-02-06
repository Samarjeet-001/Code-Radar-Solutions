# include<stdio.h>
int main()
{
    float a,b;
    char ch;
    scanf("%f %f %c",&a,&b,&ch);
    if(b == 0 && ch == '/')
    {
        printf("error");
        break;
    }
    switch(ch)
    {
        case '+':
        printf("%.f",a+b);
        break;
        case '-':
        printf("%.f",a-b);
        break;
        case '*':
        printf("%.f",a*b);
        break;
        case '/':
        printf("%.f",a/b);
        break;
        default:
        printf("Invalid");
    }
    return (0);

}